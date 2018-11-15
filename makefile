all: parse.o
	gcc parse.o

clean:
	rm -f *~ *.gch* a.out *.o *#*

run:
	./a.out

parse.o: parse.c parse.h
	gcc -c parse.c parse.h
