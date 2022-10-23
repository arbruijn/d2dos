all: support source .SYMBOLIC

support: .SYMBOLIC
	cd support
	wmake
	cd ..

source: .SYMBOLIC
	support\idpatch original\descent2.exe
	cd source
	wmake
	cd ..
	support\gwbind original\descent2.exe source\main\descent2.exe

cleanid: .SYMBOLIC
	-support\idpatch source\ext\srcids.txt

clean: cleanid .SYMBOLIC
	cd support
	wmake clean
	cd ..
	cd source
	wmake clean
	cd ..
	del /q source\lib

