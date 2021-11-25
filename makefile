all: connections  libmylib.a

connections: main.o my_mat.o
	gcc -Wall -g -o connections main.o my_mat.o

libmylib.a: main.o my_mat.o
	ar -rcs libmylib.a my_mat.o main.o

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c
  
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

clean:
	rm -f *.o connections