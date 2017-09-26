

all: main.o object.o
	g++ main.o object.o -o a.out

run:
	./a.out

clean:
	rm -rf *.o
	rm -rf *.out

main.o: main.cpp object.h node.h list.h
	g++ -c main.cpp

object.o: object.cpp object.h
	g++ -c object.cpp