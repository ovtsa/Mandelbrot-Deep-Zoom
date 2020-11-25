#include <iostream>
#include "Mandelbrot.h"
#include "Graph.h"

int main(int argc, char **argv) {
	Graph g(1920, 1080, -2.75, 1.75, -1.5, 1.5);
	Mandelbrot m(g);
	std::printf("drawing mandelbrot set to %s\n", argv[1]);
	m.drawToPPM(argv[1]);
	return 0;
}

