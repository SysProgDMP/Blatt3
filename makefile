OBJECTS=matrix.o mymatrix.o
CPPFLAGS=-Wall -g


matrix.exe: matrix.o mymatrix.o
	gcc $(CPPFLAGS) -o matrix.exe $(OBJECTS)
matrix.o: matrix.c
	gcc $(CPPFLAGS) -c matrix.c
mymatrix.o: mymatrix.h mymatrix.c
	gcc $(CPPFLAGS) -c mymatrix.c
