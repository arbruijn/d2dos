#ifndef MVELIB32_H_
#define MVELIB32_H_

#define MVE_RM_NORMAL 0
#define MVE_GFX_VESA_CURRENT 0
#define MVE_GFX_VGA_CURRENT -2
#define MVE_ERR_EOF -1

void __cdecl MVE_SetPalette(unsigned char *p,unsigned start,unsigned count);
typedef int __cdecl (mve_cb_ShowFrame)(void);
typedef int __cdecl (mve_cb_SetPalette)(unsigned char *p,unsigned start,unsigned count);

void __cdecl MVE_memCallbacks(void *, void *);
void __cdecl MVE_ioCallbacks(void *);
//void __cdecl MVE_sfSVGA( int, int, int, int, void *, int, int, void *, int);
int __cdecl MVE_gfxMode(int);
int __cdecl MVE_rmPrepMovie(int, int, int, int);
void __cdecl MVE_rmFastMode(int);
int __cdecl MVE_sfCallbacks (mve_cb_ShowFrame *);
int __cdecl MVE_palCallbacks(mve_cb_SetPalette *);
void __cdecl MVE_sndVolume(int);
void __cdecl MVE_SOS_sndInit(int);
int __cdecl MVE_rmStepMovie();
void __cdecl MVE_rmEndMovie();
int __cdecl MVE_rmHoldMovie();
void __cdecl MVE_memVID(void *, void *, int);
void __cdecl MVE_ReleaseMem();

// needed for Watcom 10.5+
#pragma aux MVE_C "_*" \
                parm caller [ ] \
                value struct float struct routine [eax] \
                modify [eax ebx ecx edx]

#pragma aux (MVE_C) MVE_memCallbacks
#pragma aux (MVE_C) MVE_ioCallbacks
#pragma aux (MVE_C) MVE_gfxMode
#pragma aux (MVE_C) MVE_rmPrepMovie
#pragma aux (MVE_C) MVE_rmFastMode
#pragma aux (MVE_C) MVE_sfCallbacks
#pragma aux (MVE_C) MVE_palCallbacks
#pragma aux (MVE_C) MVE_sndVolume
#pragma aux (MVE_C) MVE_SOS_sndInit
#pragma aux (MVE_C) MVE_rmStepMovie
#pragma aux (MVE_C) MVE_rmEndMovie
#pragma aux (MVE_C) MVE_rmHoldMovie
#pragma aux (MVE_C) MVE_memVID
#pragma aux (MVE_C) MVE_ReleaseMem

#endif
