/*
 * Copyright (C) 2005 Texas Instruments Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
/* davincihd_display.h */

#ifndef DAVINCI_DISPLAY_H
#define DAVINCI_DISPLAY_H

#ifdef __KERNEL__

/* Header files */
#include <linux/videodev.h>
#include <linux/videodev2.h>
#include <media/video-buf.h>
#include <video/davinci_osd.h>
#include <media/davinci/vid_encoder_types.h>

#define DAVINCI_DISPLAY_MAX_DEVICES 2

enum davinci_display_device_id {
	DAVINCI_DISPLAY_DEVICE_0,
	DAVINCI_DISPLAY_DEVICE_1
};

#define DAVINCI_DISPLAY_MAJOR_RELEASE              1
#define DAVINCI_DISPLAY_MINOR_RELEASE              0
#define DAVINCI_DISPLAY_BUILD                      1
#define DAVINCI_DISPLAY_VERSION_CODE       ((DAVINCI_DISPLAY_MAJOR_RELEASE<<16) | \
	(DAVINCI_DISPLAY_MINOR_RELEASE<<8)  | \
	DAVINCI_DISPLAY_BUILD)

#define DAVINCI_DISPLAY_VALID_FIELD(field)   ((V4L2_FIELD_NONE == field) || \
	 (V4L2_FIELD_ANY == field) || (V4L2_FIELD_INTERLACED == field))

/* Macros */
#define ISNULL(p)       ((NULL) == (p))
#define ISALIGNED(a)    (0 == (a%8))

/* Exp ratio numerator and denominator constants */
#define DAVINCI_DISPLAY_H_EXP_RATIO_N   (9)
#define DAVINCI_DISPLAY_H_EXP_RATIO_D   (8)
#define DAVINCI_DISPLAY_V_EXP_RATIO_N   (6)
#define DAVINCI_DISPLAY_V_EXP_RATIO_D   (5)

/* Zoom multiplication factor */
#define DAVINCI_DISPLAY_ZOOM_4X (4)
#define DAVINCI_DISPLAY_ZOOM_2X (2)

#define DAVINCI_DISPLAY_PIXELASPECT_NTSC 		{11, 10}
#define DAVINCI_DISPLAY_PIXELASPECT_PAL  		{54, 59}
#define DAVINCI_DISPLAY_PIXELASPECT_SP    	    {1, 1}

/* settings for commonly used video formats */
#define DAVINCI_DISPLAY_WIN_NTSC     {0, 0, 720, 480}
#define DAVINCI_DISPLAY_WIN_PAL      {0, 0, 720, 576}
#define DAVINCI_DISPLAY_WIN_640_480  {0, 0, 640, 480}
#define DAVINCI_DISPLAY_WIN_640_400  {0, 0, 640, 400}
#define DAVINCI_DISPLAY_WIN_640_350  {0, 0, 640, 350}
#define DAVINCI_DISPLAY_WIN_720P  {0, 0, 1280, 720}
#define DAVINCI_DISPLAY_WIN_1080I  {0, 0, 1920, 1080}

/* Structures */
struct display_layer_info {
	int enable;
	enum davinci_disp_layer id;	/* Layer ID used by Display Manager */
	struct davinci_layer_config config;
	enum davinci_zoom_factor h_zoom;
	enum davinci_zoom_factor v_zoom;
	enum davinci_h_exp_ratio h_exp;
	enum davinci_v_exp_ratio v_exp;
};

/* display object structure */
struct display_obj {
	/* Buffer specific parameters */
	u32 fbuffers[VIDEO_MAX_FRAME];	/* List of buffer pointers for
					   storing frames */
	u32 numbuffers;		/* number of buffers in fbuffers */
	struct videobuf_buffer *curFrm;	/* Pointer pointing to current
					   v4l2_buffer */
	struct videobuf_buffer *nextFrm;	/* Pointer pointing to current
						   v4l2_buffer */
	/* videobuf specific parameters */
	struct videobuf_queue buffer_queue;	/* Buffer queue used in
						   video-buf */
	struct list_head dma_queue;	/* Queue of filled frames */
	spinlock_t irqlock;	/* Used in video-buf */

	/* V4l2 specific parameters */
	struct video_device *video_dev;	/* Identifies video device for
					   this layer */
	enum v4l2_memory memory;	/* This field keeps track of type
					   of buffer exchange mechanism user
					   has selected */
	struct v4l2_prio_state prio;	/* Used to keep track of state of
					   the priority */
	struct v4l2_pix_format pix_fmt;	/* Used to store pixel format */
	enum v4l2_field buf_field;

	/* Video layer configuration params */
	struct display_layer_info layer_info;

	/* vpbe specific parameters */
	unsigned char window_enable;	/*enabke window for display */

	u32 usrs;		/* number of open instances of
				   the layer */
	u32 io_usrs;		/* number of users performing
				   IO */
	u32 field_id;		/* Indicates id of the field
				   which is being displayed */

	u8 started;		/* Indicates whether streaming
				   started */
	enum davinci_display_device_id device_id;	/* Identifies device object */
};

/* File handle structure */
struct davinci_fh {
	struct display_obj *layer;	/* pointer to layer object for
					   opened device */
	u8 io_allowed;		/* Indicates whether this file handle
				   is doing IO */
	enum v4l2_priority prio;	/* Used to keep track priority of
					   this instance */
};

/* vpbe device structure */
struct davinci_display {
	/* layer specifc parameters */
	struct semaphore lock;	/* lock used to access this
				   structure */

	/* Display mode information */
	struct vid_enc_mode_info mode_info;

	/* interrupt callback */
	struct davinci_disp_callback event_callback;

	struct display_obj *dev[DAVINCI_DISPLAY_MAX_DEVICES];
};

struct buf_config_params {
	u8 min_numbuffers;
	u8 numbuffers[DAVINCI_DISPLAY_MAX_DEVICES];
	u32 min_bufsize[DAVINCI_DISPLAY_MAX_DEVICES];
	u32 layer_bufsize[DAVINCI_DISPLAY_MAX_DEVICES];
};

#endif				/* End of __KERNEL__ */

#endif				/* DAVINCI_DISPLAY_H */
