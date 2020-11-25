mandelbrotImage: main.o Complex.o Graph.o Mandelbrot.o
	g++ main.o Complex.o Graph.o Mandelbrot.o -o mandelbrotImage

tests: TestsMain.o Tests.o Complex.o Graph.o Mandelbrot.o
	g++ TestsMain.o Tests.o Complex.o Graph.o Mandelbrot.o -o tests

TestsMain.o: TestsMain.cpp
	g++ -c TestsMain.cpp

Tests.o: Tests.cpp Tests.h 
	g++ -c Tests.cpp 

Complex.o: Complex.cpp Complex.h
	g++ -c Complex.cpp

Graph.o: Graph.cpp Graph.h
	g++ -c Graph.cpp

Mandelbrot.o: Mandelbrot.cpp Mandelbrot.h
	g++ -c Mandelbrot.cpp 

clean:
	rm *.o mandelbrotImage tests
