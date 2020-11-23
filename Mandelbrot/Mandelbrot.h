#ifndef MANDELBROT_H
#define MANDELBROT_H
#include <string>
#include "Graph.h"
#include "Complex.h"

class Mandelbrot {
	private:
		Graph graph;
	public:
		Mandelbrot(Graph graph) : graph(graph) {}
		int escapeCounter(Complex point);
		void drawToPPM(std::string name);
};

#endif
