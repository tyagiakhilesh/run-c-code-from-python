default:
	echo "'make lib' to create the shared lib libcheckNonAscii.so"
	echo "'make byLib' to create call_dynamic, using shared lib"
	echo "'make clean' to remove all .o, exec call, main and libFct.so"

lib: library.c
	gcc -fPIC -c library.c
	gcc -shared -o libcheckNonAscii.so library.o

testExecutable:  main.c libcheckNonAscii.so
	gcc -c main.c
	gcc -o main main.o -L./ -lcheckNonAscii

clean:
	rm *.o libcheckNonAscii.so main