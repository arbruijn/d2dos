/*
THE COMPUTER CODE CONTAINED HEREIN IS THE SOLE PROPERTY OF PARALLAX
SOFTWARE CORPORATION ("PARALLAX").  PARALLAX, IN DISTRIBUTING THE CODE TO
END-USERS, AND SUBJECT TO ALL OF THE TERMS AND CONDITIONS HEREIN, GRANTS A
ROYALTY-FREE, PERPETUAL LICENSE TO SUCH END-USERS FOR USE BY SUCH END-USERS
IN USING, DISPLAYING,  AND CREATING DERIVATIVE WORKS THEREOF, SO LONG AS
SUCH USE, DISPLAY OR CREATION IS FOR NON-COMMERCIAL, ROYALTY OR REVENUE
FREE PURPOSES.  IN NO EVENT SHALL THE END-USER USE THE COMPUTER CODE
CONTAINED HEREIN FOR REVENUE-BEARING PURPOSES.  THE END-USER UNDERSTANDS
AND AGREES TO THE TERMS HEREIN AND ACCEPTS THE SAME BY USE OF THIS FILE.  
COPYRIGHT 1993-1999 PARALLAX SOFTWARE CORPORATION.  ALL RIGHTS RESERVED.
*/



#ifndef _TACTILE_H
#define _TACTILE_H


#include "vecmat.h"

//#define TACTILE


extern int TactileStick;
extern int Tactile_open(int);
extern void Tactile_apply_force (vms_vector *,vms_matrix *);
extern void Tactile_jolt (int,int,int);
extern void Tactile_Xvibrate (int,int);
extern void Tactile_Xvibrate_clear ();
extern void Tactile_do_collide(vms_vector*,vms_matrix *);

/* DLL functions -moved from i-force.h */

#define 	MAX_POSITION_CHANNELS	4	/* Max num pos feedback chans */

#if 0
typedef struct
{
	int	major;		/* major release number */
	int	minor;		/* minor release number */
	int	subminor;	/* subminor release number */
} FFversion;			/* firmware release version */

typedef struct
{
	int	month;	/* month of release */
	int	day;		/* day of release */
	int	year;		/* year of release */
} FFdate;

/*	Record containing all Joystick data
 *		Declare one of these structs in your app if you want
 *		Joystick data like serial number, model number, firmware
 *		version, etc reported back by the InitStick() command.
 *   Examples: (assuming 'StickRec' is declared as a Joystick Record)
 *      StickRec.SerialNumber - serial number
 *      StickRec.ForceAxes - number of force feedback axes
 */
typedef struct JoystickRecord
{
	int	ForceAxes;			/* number of force feedback axes */
	int	CommandAvailable;	/* command available */
	int	PositionAxes;		/* number of position feedback axes */
	int	Position[MAX_POSITION_CHANNELS];		/* 16-bit positions */

	FFversion	Version;			/* firmware release version */
	FFdate	Date;					/* firmware release date */
	unsigned long int SerialNumber;
	unsigned int	ModelNumber;

} JoystickRecord;

extern char	 InitStick(JoystickRecord *StickRec);
extern char	 GetStickStatus(char *StickStatus);
extern char	 Echo(void);
extern char  	IForceAuthenticate(void);
extern int    GetStickError(void);
extern char  	CloseStick(void);
extern void	 SetJoystickPort(int Port);
extern void  	SetJoystickAddressIRQ(unsigned int addr, int irq);
#endif
extern char  	EnableForces(void);
extern char  	DisableForces(void);
extern char  	ClearForces(void);

/* Force Effect Functions */
extern char  	Jolt(unsigned int Magnitude,int Direction,unsigned int Duration);
extern char  	ButtonReflexJolt(unsigned int ButtonAssign, unsigned int Magnitude,
		int direction, unsigned int Duration, unsigned int RepeatRate);
extern char  	ButtonReflexClear(unsigned int ButtonAssign);
extern char  	XVibration(unsigned int Lmagnitude, unsigned int Rmagnitude,
		unsigned int Frequency);
extern char  	XVibrationClear(void);
extern char  	YVibration(unsigned int Umagnitude, unsigned int Dmagnitude,
		unsigned int Frequency);
extern char  	YVibrationClear(void);
extern char  	Buffeting(unsigned int Magnitude);
extern char  	BuffetingClear(void);
extern char  	VectorForce(unsigned int Magnitude, int Direction);
extern char  	VectorForceClear(void);
extern char  	XYVectorForce(int XMagnitude,int YMagnitude);

#define TACTILE_IMMERSION 1
#define TACTILE_CYBERNET  2

// workaround for watcom quirk where global var order depends on number of declarations
void sfill00(void);
void sfill01(void);
void sfill02(void);
void sfill03(void);

#endif
