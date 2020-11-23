#include <cstdlib>
#include <string>
#include <fstream>
#include "Complex.h"
#include "Mandelbrot.h"
#include "Graph.h"

int Mandelbrot::escapeCounter(Complex point) { 
	int maxIter = 50;
	int iterCount = 0;
	Complex z(0, 0);
	while (z.abs() < 2 && iterCount <= maxIter) {
		z = z * z + point;
		iterCount++;
	}
	if (iterCount < maxIter) return (255 * iterCount) / maxIter - 1;
	return 0; 
}

void Mandelbrot::drawToPPM(std::string name) {
	std::ofstream outFile;
	outFile.open(name);
	outFile << "P3\n" << this->graph.getPixWidth() << ' ' << this->graph.getPixHeight() << " 255\n";
	for (int i = 0; i < this->graph.getPixHeight(); i++) {
		for (int j = 0; j < this->graph.getPixWidth(); j++) {
			int iterCount = escapeCounter(graph.pixelToCoordinate(j, i));
			outFile << iterCount<< ' ' << iterCount << ' ' << iterCount << '\n';
		}
	}
	outFile.close();
}

