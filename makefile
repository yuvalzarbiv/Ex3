#-*-MakeFile-*-

all: isort txtfind

txtfind: txtfind.o mainT.o
	gcc -Wall -o txtfind mainT.o txtfind.o

isort: isort.o mainS.o
	gcc -Wall -o isort mainS.o isort.o

mainS.o: mainS.c isort.h
	gcc -Wall -c mainS.c

mainT.o: mainT.c txtfind.h
	gcc -Wall -c mainT.c

isort.o: isort.c isort.h
	gcc -Wall -fPIC -c isort.c

txtfind.o: txtfind.c txtfind.h
	gcc -Wall -c txtfind.c

.PHONY: clean all

clean:
	rm -f *.o *.a txtfind isort
