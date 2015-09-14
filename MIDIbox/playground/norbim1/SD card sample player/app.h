// $Id: app.h 710 2009-08-15 13:54:30Z tk $
/*
 * Header file of application
 *
 * ==========================================================================
 *
 *  Copyright (C) 2008 Thorsten Klose (tk@midibox.org)
 *  Licensed for personal non-commercial use only.
 *  All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _APP_H
#define _APP_H

#ifndef MIOS32_FAMILY_EMULATION
# include <FreeRTOS.h>
# include <portmacro.h>
# include <task.h>
# include <queue.h>
# include <semphr.h>
#endif

/////////////////////////////////////////////////////////////////////////////
// Global definitions
/////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

// messages
#define PRINT_MSG_NONE           0
#define PRINT_MSG_INIT           1
#define PRINT_MSG_SELECTIONS     2

/////////////////////////////////////////////////////////////////////////////
// Global Types
/////////////////////////////////////////////////////////////////////////////

typedef enum
{
  RAW_FILE = 0,
  WAV_FILE_MONO,
  WAV_FILE_STEREO,
}Audio_FileTypeDef;

typedef struct
{
  uint32_t   ChunkID;       /* 0 */
  uint32_t   FileSize;      /* 4 */
  uint32_t   FileFormat;    /* 8 */
  uint32_t   SubChunk1ID;   /* 12 */
  uint32_t   SubChunk1Size; /* 16*/
  uint16_t   AudioFormat;   /* 20 */
  uint16_t   NbrChannels;   /* 22 */
  uint32_t   SampleRate;    /* 24 */

  uint32_t   ByteRate;      /* 28 */
  uint16_t   BlockAlign;    /* 32 */
  uint16_t   BitPerSample;  /* 34 */
  uint32_t   SubChunk2ID;   /* 36 */
  uint32_t   SubChunk2Size; /* 40 */

}WAVE_FormatTypeDef;

/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern void APP_Init(void);
extern void APP_Background(void);
extern void APP_MIDI_NotifyPackage(mios32_midi_port_t port, mios32_midi_package_t midi_package);
extern void APP_SRIO_ServicePrepare(void);
extern void APP_SRIO_ServiceFinish(void);
extern void APP_DIN_NotifyToggle(u32 pin, u32 pin_value);
extern void APP_ENC_NotifyChange(u32 encoder, s32 incrementer);
extern void APP_AIN_NotifyChange(u32 pin, u32 pin_value);

extern s32 SYNTH_Init(u32 mode);

/////////////////////////////////////////////////////////////////////////////
// Export global variables
/////////////////////////////////////////////////////////////////////////////

extern volatile u8 print_msg;

/* Exported constants --------------------------------------------------------*/
#define  CHUNK_ID                            0x46464952  /* correspond to the letters 'RIFF' */
#define  FILE_FORMAT                         0x45564157  /* correspond to the letters 'WAVE' */
#define  FORMAT_ID                           0x20746D66  /* correspond to the letters 'fmt ' */
#define  DATA_ID                             0x61746164  /* correspond to the letters 'data' */
#define  FACT_ID                             0x74636166  /* correspond to the letters 'fact' */
#define  WAVE_FORMAT_PCM                     0x01
#define  FORMAT_CHNUK_SIZE                   0x10
#define  CHANNEL_MONO                        0x01
#define  CHANNEL_STEREO                      0x02
#define  SAMPLE_RATE_8000                    8000
#define  SAMPLE_RATE_11025                   11025
#define  SAMPLE_RATE_22050                   22050
#define  SAMPLE_RATE_44100                   44100
#define  BITS_PER_SAMPLE_8                   8
#define  BITS_PER_SAMPLE_16                  16

#endif /* _APP_H */
