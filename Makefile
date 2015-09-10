# all - compile the program if any source files have changed
all: Polygon.o Square.o Triangle.o
	g++ Polygon.o Square.o Triangle.o main.cpp -o main

# the Polygon.o object file needs recompiled if Polygon.cpp or Polygon.h changes
Polygon.o: Polygon.cpp Polygon.h
	g++ -c Polygon.cpp -o Polygon.o

# the Square.o object file needs recompiled if Square.cpp or Square.h changes
Square.o: Square.cpp Square.h
	g++ -c Square.cpp -o Square.o

# the Triangle.o object file needs recompiled if Triangle.cpp or Triangle.h changes
Triangle.o: Triangle.cpp Triangle.h
	g++ -c Triangle.cpp -o Triangle.o

# clean - delete the compiled version of your program and
# any object files or other temporary files created during compilation.
clean:
	rm -f *.o main