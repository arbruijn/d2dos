#
# $Source: f:/miner/source/rcs/makefile $
# $Revision: 1.9 $
# $Author: matt $
# $Date: 1996/12/05 19:03:06 $
#
# Makefile for Descent libraries
#

# Subdirs to make for the DOS libraries
SUBSYSTEMS_DOS = includes misc mem fix cfile pa_null 2d vga bios iff div &
	vecmat 3d texmap ext main #ui tactile unarj sosdigi sosmidi

# Subdirs to make for the Win95 libraries
SUBSYSTEMS_WIN = includes misc mem fix cfile pa_null 2d vga novga iff div &
	vecmat tactile win95 3d texmap unarj main

# All subdirs.  Needed for clean to work
#SUBSYSTEMS = includes misc mem fix cfile pa_null 2d vga bios iff div &
#	ui vecmat 3d texmap tactile unarj sosdigi sosmidi win95 novga
SUBSYSTEMS = $(SUBSYSTEMS_DOS)

# What to make in the subdirs if nothing specified
SUBTARGETS = optimize no_mono no_debug linstall		#for release
##SUBTARGETS = linstall					#for debugging

# When making clean here, delete libs
CLEAN_TARGS = lib\*.lib

default: dos .SYMBOLIC
	#%error 1 Error: You must specify either DOS or WIN

real_clean: .SYMBOLIC
	make clean
	del lib\*.h
	del lib\*.inc
	%if %exists(lib\win)
	  del lib\win\*.h
	  del lib\win\*.inc
	  del lib\win\*.lib
	%endif


# Build libs for DOS
dos: .SYMBOLIC
	cd bios
	wmake linstallh
	cd ..
	wmake SUBSYSTEMS=$$(SUBSYSTEMS_DOS) all

# Build libs for Win
win: .SYMBOLIC
	cd bios
	wmake linstallh
	cd ..
	(cd win95;make linstallh)
	make SUBSYSTEMS=$$(SUBSYSTEMS_WIN) all


#all Miner makefiles should include this
!include ..\init\wmake.def

