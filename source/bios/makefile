#
# $Source: f:/miner/source/bios/rcs/makefile $
# $Revision: 1.20 $
# $Author: samir $
# $Date: 1995/06/12 18:37:24 $
#
# Makefile for bios functions
#

# What to install, and where to install it
INSTALL_TARGS = io.lib joy.h key.h mono.h mouse.h timer.h swift.h dpmi.h &
		ipx.h rbaudio.h	findfile.h error.h

# What to clean
CLEAN_TARGS = $(OBJDIR)\*.obj

# What libs to make
LIBS = io

# What test programs to make
TEST_PROGS = demo
# testj testk testm testms

# What object files for the lib
IO_OBJS = key.obj joy.obj mouse.obj timer.obj mono.obj &
	  joyc.obj dpmi.obj ipx.obj rbaudio.obj	findfile.obj error.obj

# What object files and libs for the test programs
DEMO_SRCS = cdrom.c
DEMO_LIBS = io.lib

#rules and targets common to all Miner makefiles
!include ..\..\init\wmake.def

