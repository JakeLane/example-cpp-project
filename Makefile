# all - compile the program if any source files have changed
all: Polygon.o Rectangle.o Triangle.o
	g++ Polygon.o Rectangle.o Triangle.o main.cpp -o main

# the Polygon.o object file needs recompiled if Polygon.cpp or Polygon.h changes
Polygon.o: Polygon.cpp Polygon.h
	g++ -c Polygon.cpp -o Polygon.o

# the Rectangle.o object file needs recompiled if Rectangle.cpp or Rectangle.h changes
Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp -o Rectangle.o

# the Triangle.o object file needs recompiled if Triangle.cpp or Triangle.h changes
Triangle.o: Triangle.cpp Triangle.h
	g++ -c Triangle.cpp -o Triangle.o

# clean - delete the compiled version of your program and
# any object files or other temporary files created during compilation.
clean:
	rm -f *.o main
