/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_gain_table_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio cgain table parameters
 *
 * Author:
 * -------
 * ChiPeng Chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_GAIN_TABLE_DEFAULT_H
#define AUDIO_GAIN_TABLE_DEFAULT_H

// Headset Gain
// speaker gain
// SIP HEADSET gain
// SIP Headset Gain
// SIP speaker gain
#define DEFAULT_VOICE_GAIN_TABLE_PARA \
    0x00 , 0x03000000 ,    0x31 , 0x04000000 ,    0x61 , 0x05000000 ,    0x91 , 0x06000000 ,    0xa1 , 0x07000000 ,\
    0xc1 , 0x03000000 ,    0xff , 0x04000000 ,    0x00 , 0x05000000 ,    0x48 , 0x06000000 ,    0x50 , 0x07000000 ,\
    0x58 , 0x03000000 ,    0x60 , 0x04000000 ,    0x68 , 0x05000000 ,    0x70 , 0x06000000 ,    0x78 , 0x07000000 ,\
    0x80 , 0x03000000 ,    0x88 , 0x04000000 ,    0x90 , 0x05000000 ,    0x98 , 0x06000000 ,    0xa0 , 0x07000000 ,\
    \
    0x00 , 0x04000000 ,    0x32 , 0x05000000 ,    0x62 , 0x06000000 ,    0x92 , 0x07000000 ,    0xa2 , 0x03000000 ,\
    0xc2 , 0x04000000 ,    0xf2 , 0x05000000 ,    0x00 , 0x06000000 ,    0x48 , 0x07000000 ,    0x50 , 0x03000000 ,\
    0x58 , 0x04000000 ,    0x60 , 0x05000000 ,    0x68 , 0x06000000 ,    0x70 , 0x07000000 ,    0x78 , 0x03000000 ,\
    0x80 , 0x04000000 ,    0x88 , 0x05000000 ,    0x90 , 0x06000000 ,    0x98 , 0x07000000 ,    0xa0 , 0x03000000 ,\
    \
    0x00 , 0x05000000 ,    0x33 , 0x06000000 ,    0x63 , 0x07000000 ,    0x93 , 0x03000000 ,    0xa3 , 0x04000000 ,\
    0xc3 , 0x05000000 ,    0xff , 0x06000000 ,    0x00 , 0x07000000 ,    0x48 , 0x03000000 ,    0x50 , 0x04000000 ,\
    0x58 , 0x05000000 ,    0x60 , 0x06000000 ,    0x68 , 0x07000000 ,    0x70 , 0x03000000 ,    0x78 , 0x04000000 ,\
    0x80 , 0x05000000 ,    0x88 , 0x06000000 ,    0x90 , 0x07000000 ,    0x98 , 0x03000000 ,    0xa0 , 0x04000000 ,\
    \
    0x00 , 0x06000000 ,    0x34 , 0x07000000 ,    0x64 , 0x03000000 ,    0x94 , 0x04000000 ,    0xa4 , 0x05000000 ,\
    0xc4 , 0x06000000 ,    0xff , 0x07000000 ,    0x00 , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x07000000 ,    0x35 , 0x03000000 ,    0x65 , 0x04000000 ,    0x95 , 0x05000000 ,    0xa5 , 0x06000000 ,\
    0xc5 , 0x07000000 ,    0xff , 0x03000000 ,    0x00 , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_SYSTEM_GAIN_TABLE_PARA \
    0x00 , 0x04000000 ,    0x30 , 0x05000000 ,    0x50 , 0x06000000 ,    0x70 , 0x07000000 ,    0x90 , 0x03000000 ,\
    0xb0 , 0x04000000 ,    0xf0 , 0x05000000 ,    0xff , 0x06000000 ,    0x48 , 0x07000000 ,    0x50 , 0x03000000 ,\
    0x58 , 0x04000000 ,    0x60 , 0x05000000 ,    0x68 , 0x06000000 ,    0x70 , 0x07000000 ,    0x78 , 0x03000000 ,\
    0x80 , 0x04000000 ,    0x88 , 0x05000000 ,    0x90 , 0x06000000 ,    0x98 , 0x07000000 ,    0xa0 , 0x03000000 ,\
    \
    0x00 , 0x05000000 ,    0x30 , 0x06000000 ,    0x50 , 0x07000000 ,    0x70 , 0x03000000 ,    0x90 , 0x04000000 ,\
    0xb0 , 0x05000000 ,    0xf0 , 0x06000000 ,    0xff , 0x07000000 ,    0x48 , 0x03000000 ,    0x50 , 0x04000000 ,\
    0x58 , 0x05000000 ,    0x60 , 0x06000000 ,    0x68 , 0x07000000 ,    0x70 , 0x03000000 ,    0x78 , 0x04000000 ,\
    0x80 , 0x05000000 ,    0x88 , 0x06000000 ,    0x90 , 0x07000000 ,    0x98 , 0x03000000 ,    0xa0 , 0x04000000

// Headset Gain
// speaker gain
// Ringtone Headset Gain
// Ringtone speaker gain

#define DEFAULT_RINGTONE_GAIN_TABLE_PARA \
    0x00 , 0x04000000 ,    0x30 , 0x05000000 ,    0x50 , 0x06000000 ,    0x70 , 0x07000000 ,    0x90 , 0x03000000 ,\
    0xb0 , 0x04000000 ,    0xf0 , 0x05000000 ,    0xff , 0x06000000 ,    0x48 , 0x07000000 ,    0x50 , 0x03000000 ,\
    0x58 , 0x04000000 ,    0x60 , 0x05000000 ,    0x68 , 0x06000000 ,    0x70 , 0x07000000 ,    0x78 , 0x03000000 ,\
    0x80 , 0x04000000 ,    0x88 , 0x05000000 ,    0x90 , 0x06000000 ,    0x98 , 0x07000000 ,    0xa0 , 0x03000000 ,\
    \
    0x00 , 0x05000000 ,    0x30 , 0x06000000 ,    0x50 , 0x07000000 ,    0x70 , 0x03000000 ,    0x90 , 0x04000000 ,\
    0xb0 , 0x05000000 ,    0xf0 , 0x06000000 ,    0xff , 0x07000000 ,    0x48 , 0x03000000 ,    0x50 , 0x04000000 ,\
    0x58 , 0x05000000 ,    0x60 , 0x06000000 ,    0x68 , 0x07000000 ,    0x70 , 0x03000000 ,    0x78 , 0x04000000 ,\
    0x80 , 0x05000000 ,    0x88 , 0x06000000 ,    0x90 , 0x07000000 ,    0x98 , 0x03000000 ,    0xa0 , 0x04000000 ,\
    \
    0x00 , 0x06000000 ,    0x30 , 0x07000000 ,    0x50 , 0x03000000 ,    0x90 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    0xc0 , 0x06000000 ,    0xe0 , 0x07000000 ,    0xff , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x07000000 ,    0x10 , 0x03000000 ,    0x50 , 0x04000000 ,    0x90 , 0x05000000 ,    0xa0 , 0x06000000 ,\
    0xc0 , 0x07000000 ,    0xf0 , 0x03000000 ,    0xff , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_MUSIC_GAIN_TABLE_PARA \
    0x00 , 0x03000000 ,    0x18 , 0x04000000 ,    0x28 , 0x05000000 ,    0x38 , 0x06000000 ,    0x48 , 0x07000000 ,\
    0x58 , 0x03000000 ,    0x78 , 0x04000000 ,    0x98 , 0x05000000 ,    0xb8 , 0x06000000 ,    0xc8 , 0x07000000 ,\
    0xd8 , 0x03000000 ,    0xe8 , 0x04000000 ,    0xff , 0x05000000 ,    0x70 , 0x06000000 ,    0x78 , 0x07000000 ,\
    0x80 , 0x03000000 ,    0x88 , 0x04000000 ,    0x90 , 0x05000000 ,    0x98 , 0x06000000 ,    0xa0 , 0x07000000 ,\
    \
    0x00 , 0x04000000 ,    0x20 , 0x05000000 ,    0x30 , 0x06000000 ,    0x40 , 0x07000000 ,    0x50 , 0x03000000 ,\
    0x60 , 0x04000000 ,    0x70 , 0x05000000 ,    0x80 , 0x06000000 ,    0x90 , 0x07000000 ,    0xa0 , 0x03000000 ,\
    0xb0 , 0x04000000 ,    0xc0 , 0x05000000 ,    0xf0 , 0x06000000 ,    0x70 , 0x07000000 ,    0x78 , 0x03000000 ,\
    0x80 , 0x04000000 ,    0x88 , 0x05000000 ,    0x90 , 0x06000000 ,    0x98 , 0x07000000 ,    0xa0 , 0x03000000

// Headset Gain
// speaker gain
#define DEFAULT_ALARM_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x31 , 0x07000000 ,    0x51 , 0x03000000 ,    0x91 , 0x04000000 ,    0xa1 , 0x05000000 ,\
    0xc1 , 0x06000000 ,    0xe1 , 0x07000000 ,    0xff , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x01 , 0x07000000 ,    0x11 , 0x03000000 ,    0x51 , 0x04000000 ,    0x91 , 0x05000000 ,    0xa1 , 0x06000000 ,\
    0xc1 , 0x07000000 ,    0xf1 , 0x03000000 ,    0xff , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_NOTIFICATION_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x32 , 0x07000000 ,    0x52 , 0x03000000 ,    0x92 , 0x04000000 ,    0xa2 , 0x05000000 ,\
    0xc2 , 0x06000000 ,    0xe2 , 0x07000000 ,    0xff , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x02 , 0x07000000 ,    0x12 , 0x03000000 ,    0x52 , 0x04000000 ,    0x92 , 0x05000000 ,    0xa2 , 0x06000000 ,\
    0xc2 , 0x07000000 ,    0xf2 , 0x03000000 ,    0xff , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000


// Headset Gain
// speaker gain
#define DEFAULT_BLUETOOTH_SCO_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x32 , 0x07000000 ,    0x52 , 0x03000000 ,    0x92 , 0x04000000 ,    0xa2 , 0x05000000 ,\
    0xc2 , 0x06000000 ,    0xe2 , 0x07000000 ,    0xff , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x02 , 0x07000000 ,    0x12 , 0x03000000 ,    0x52 , 0x04000000 ,    0x92 , 0x05000000 ,    0xa2 , 0x06000000 ,\
    0xc2 , 0x07000000 ,    0xf2 , 0x03000000 ,    0xff , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_ENFORCEAUDIBLE_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x36 , 0x07000000 ,    0x56 , 0x03000000 ,    0x96 , 0x04000000 ,    0xa6 , 0x05000000 ,\
    0xc6 , 0x06000000 ,    0xe6 , 0x07000000 ,    0xf6 , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x07000000 ,    0x16 , 0x03000000 ,    0x56 , 0x04000000 ,    0x96 , 0x05000000 ,    0xa6 , 0x06000000 ,\
    0xc6 , 0x07000000 ,    0xf6 , 0x03000000 ,    0xff , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_DTMF_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x18 , 0x07000000 ,    0x28 , 0x03000000 ,    0x38 , 0x04000000 ,    0x48 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x68 , 0x07000000 ,    0x78 , 0x03000000 ,    0x88 , 0x04000000 ,    0x98 , 0x05000000 ,\
    0xa8 , 0x06000000 ,    0xb8 , 0x07000000 ,    0xc8 , 0x03000000 ,    0xd8 , 0x04000000 ,    0xe8 , 0x05000000 ,\
    0xf8 , 0x06000000 ,    0xff , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x06000000 ,    0x18 , 0x07000000 ,    0x28 , 0x03000000 ,    0x38 , 0x04000000 ,    0x48 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x68 , 0x07000000 ,    0x78 , 0x03000000 ,    0x88 , 0x04000000 ,    0x98 , 0x05000000 ,\
    0xa8 , 0x06000000 ,    0xb8 , 0x07000000 ,    0xc8 , 0x03000000 ,    0xd8 , 0x04000000 ,    0xe8 , 0x05000000 ,\
    0xf8 , 0x06000000 ,    0xff , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000

// Headset Gain
// speaker gainQuant
#define DEFAULT_TTS_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x18 , 0x07000000 ,    0x28 , 0x03000000 ,    0x38 , 0x04000000 ,    0x48 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x68 , 0x07000000 ,    0x78 , 0x03000000 ,    0x88 , 0x04000000 ,    0x98 , 0x05000000 ,\
    0xa8 , 0x06000000 ,    0xb8 , 0x07000000 ,    0xc8 , 0x03000000 ,    0xd8 , 0x04000000 ,    0xe8 , 0x05000000 ,\
    0xf8 , 0x06000000 ,    0xff , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x06000000 ,    0x18 , 0x07000000 ,    0x28 , 0x03000000 ,    0x38 , 0x04000000 ,    0x48 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x68 , 0x07000000 ,    0x78 , 0x03000000 ,    0x88 , 0x04000000 ,    0x98 , 0x05000000 ,\
    0xa8 , 0x06000000 ,    0xb8 , 0x07000000 ,    0xc8 , 0x03000000 ,    0xd8 , 0x04000000 ,    0xe8 , 0x05000000 ,\
    0xf8 , 0x06000000 ,    0xff , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000

// Headset Gain
// speaker gain
#define DEFAULT_FM_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x3a , 0x07000000 ,    0x5a , 0x03000000 ,    0x9a , 0x04000000 ,    0xaa , 0x05000000 ,\
    0xca , 0x06000000 ,    0xea , 0x07000000 ,    0xfa , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x07000000 ,    0x19 , 0x03000000 ,    0x59 , 0x04000000 ,    0x99 , 0x05000000 ,    0xa9 , 0x06000000 ,\
    0xc9 , 0x07000000 ,    0xf9 , 0x03000000 ,    0xf9 , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000

// Headset Gain
// speaker gain
#define DEFAULT_MATV_GAIN_TABLE_PARA \
    0x00 , 0x06000000 ,    0x3b , 0x07000000 ,    0x5b , 0x03000000 ,    0x9b , 0x04000000 ,    0xab , 0x05000000 ,\
    0xcb , 0x06000000 ,    0xeb , 0x07000000 ,    0xfb , 0x03000000 ,    0x48 , 0x04000000 ,    0x50 , 0x05000000 ,\
    0x58 , 0x06000000 ,    0x60 , 0x07000000 ,    0x68 , 0x03000000 ,    0x70 , 0x04000000 ,    0x78 , 0x05000000 ,\
    0x80 , 0x06000000 ,    0x88 , 0x07000000 ,    0x90 , 0x03000000 ,    0x98 , 0x04000000 ,    0xa0 , 0x05000000 ,\
    \
    0x00 , 0x07000000 ,    0x1b , 0x03000000 ,    0x5b , 0x04000000 ,    0x9b , 0x05000000 ,    0xab , 0x06000000 ,\
    0xcb , 0x07000000 ,    0xfb , 0x03000000 ,    0xfb , 0x04000000 ,    0x48 , 0x05000000 ,    0x50 , 0x06000000 ,\
    0x58 , 0x07000000 ,    0x60 , 0x03000000 ,    0x68 , 0x04000000 ,    0x70 , 0x05000000 ,    0x78 , 0x06000000 ,\
    0x80 , 0x07000000 ,    0x88 , 0x03000000 ,    0x90 , 0x04000000 ,    0x98 , 0x05000000 ,    0xa0 , 0x06000000


// idle record gain
// speech  mic	gain
// sip mic	gain
// matv . fm  , tty
// reserved
#define DEFAULT_MICROPHONE_GAIN_TABLE_PARA \
    255 , 192 , \
    160 , 172 , 172, \
    160 , 172 , 172, \
    152 , 64  ,  0   , \
    0,     0,     0   ,  0  , 0

// speech  side gain
// sip mic	gain
//  reserved
#define DEFAULT_SIDETONE_GAIN_TABLE_PARA \
    16 ,  32 ,  0, \
    16 ,  32 ,  0 ,\
    0,     0

// receiver Gain
// speaker gain
// Speaer Gain
// BT Gain , BT has no pga gain , only digital gain

#define DEFAULT_SPEECH_GAIN_TABLE_PARA \
    0x0a , 0x0f000000 ,    0x09 , 0x0c000000 ,    0x08 , 0x0a000000 ,    0x07 , 0x08000000 ,    0x06 , 0x06000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x02000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    0x0a , 0x04000000 ,    0x09 , 0x05000000 ,    0x08 , 0x06000000 ,    0x07 , 0x07000000 ,    0x06 , 0x03000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x05000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    \
    0x0a , 0x0f000000 ,    0x09 , 0x0c000000 ,    0x08 , 0x0a000000 ,    0x07 , 0x08000000 ,    0x06 , 0x06000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x02000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    0x0a , 0x04000000 ,    0x09 , 0x05000000 ,    0x08 , 0x06000000 ,    0x07 , 0x07000000 ,    0x06 , 0x03000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x05000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    \
    0x0a , 0x0f000000 ,    0x09 , 0x0c000000 ,    0x08 , 0x0a000000 ,    0x07 , 0x08000000 ,    0x06 , 0x06000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x02000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    0x0a , 0x04000000 ,    0x09 , 0x05000000 ,    0x08 , 0x06000000 ,    0x07 , 0x07000000 ,    0x06 , 0x03000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x05000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    \
    0x0a , 0x0f000000 ,    0x09 , 0x0c000000 ,    0x08 , 0x0a000000 ,    0x07 , 0x08000000 ,    0x06 , 0x06000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x02000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000 ,\
    0x0a , 0x04000000 ,    0x09 , 0x05000000 ,    0x08 , 0x06000000 ,    0x07 , 0x07000000 ,    0x06 , 0x03000000 ,\
    0x05 , 0x04000000 ,    0x04 , 0x05000000 ,    0x03 , 0x06000000 ,    0x02 , 0x07000000 ,    0x01 , 0x03000000

#endif