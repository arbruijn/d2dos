#
# $Source: f:/miner/source/texmap/rcs/makefile $
# $Revision: 1.29 $
# $Author: matt $
# $Date: 1996/12/04 19:27:43 $
#
# Makefile for hack3df testbed
#

#Uncomment the following 3 lines if you want to build with only C code.
#NASM = 1
#GLOBAL_CFLAGS+=/dNASM
#GLOBAL_AFLAGS+=/DNASM

# What to install
INSTALL_TARGS = texmap.lib texmap.h

# What libs to build
LIBS = texmap

TEXMAP_OBJS = 	ntmap.obj tmapflat.obj  

!ifndef NASM
TEXMAP_OBJS +=	tmap_per.obj tmap_flt.obj tmapfade.obj tmap_ed.obj 
TEXMAP_OBJS +=  tmap_pnn.obj tmap_pln.obj tmap_plt.obj tmap_pnt.obj
TEXMAP_OBJS +=  tmap_qnn.obj tmap_qln.obj tmap_qlt.obj tmap_qnt.obj
TEXMAP_OBJS +=  tmap_lnn.obj tmap_lln.obj tmap_llt.obj tmap_lnt.obj
!else
TEXMAP_OBJS += scanline.obj
!endif

# What to clean
CLEAN_TARGS = $(OBJDIR)\*.obj

#rules and targets common to all Miner makefiles
!include ..\..\init\wmake.def

