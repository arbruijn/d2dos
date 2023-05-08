OBJS = cdmix32.obj game.obj gamerend.obj gamecntl.obj gauges.obj mglobal.obj &
	scores.obj object.obj laser.obj physics.obj bm.obj &
	menu.obj gamesave.obj switch.obj effects.obj texmerge.obj polyobj.obj &
	gamemine.obj fireball.obj ai.obj ai2.obj aipath.obj hostage.obj &
	powerup.obj fuelcen.obj render.obj piggy.obj digiobj.obj &
	gameseg.obj wall.obj collide.obj lighting.obj &
	robot.obj morph.obj vclip.obj weapon.obj fvi.obj newdemo.obj titles.obj &
	..\ext\vfx.obj ..\ext\vfxread.obj gameseq.obj controls.obj automap.obj text.obj &
	network.obj newmenu.obj netmisc.obj &
	gamefont.obj hud.obj playsave.obj &
	endlevel.obj kconfig.obj crypt.obj &
	multi.obj cntrlcen.obj credits.obj config.obj kmatrix.obj &
	paging.obj mission.obj songs.obj bmread.obj &
	escort.obj gamepal.obj multibot.obj state.obj &
	..\ext\3dmax.obj 3dfx.obj &
	inferno.obj modem.obj joydefs.obj ..\ext\victor.obj iglasses.obj movie.obj digi.obj

LLIBS = ..\lib\3d.lib ..\lib\gr.lib ..\lib\fix.lib ..\lib\iff.lib &
	..\lib\vecmat.lib &
        ..\lib\div0.lib ..\lib\misc.lib &
	..\ext\loadpats.lib &
	..\lib\cfile.lib &
	..\lib\texmap.lib &
	..\ext\unarj.lib

LLIBS += ..\ext\tactile.lib

LLIBS += ..\lib\io.lib ..\lib\vga.lib &
	..\ext\commlib.lib ..\ext\sosdigi.lib ..\ext\sosmidi.lib &
	..\ext\mvelib.lib &
	..\lib\poly_acc.lib

GLOBAL_INCFILES=settings.h
CFLAGS_MAIN = /fi=$(GLOBAL_INCFILES)

default: descent2.exe .SYMBOLIC

!include ..\..\init\wmake.def

.c.obj:
	wcc386 $(CFLAGS) $(CFLAGS_MAIN) $<

# add d li to enable debug info
descent2.exe: $(OBJS) $(LLIBS)
	*wlink option map,stack=50k,stub=$(%watcom)\binb\wstub.exe name $@ sys dos4g file { $(OBJS) } library { $(LLIBS) }
