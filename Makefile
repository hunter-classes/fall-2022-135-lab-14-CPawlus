main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp 
	g++ -c main.cpp

tests: tests.o
	g++ -o tests tests.o

tests.o: tests.cpp
	g++ -c tests.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

clean:
	rm -f main tests funcs.o main.o tests.o funcs.o