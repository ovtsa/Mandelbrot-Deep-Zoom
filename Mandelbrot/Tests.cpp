#include <iostream>
#include "Complex.h"
#include "Graph.h"
#include "Mandelbrot.h"

int complexTests() {
	std::cout << "Complex number class tests\n";
    Complex c1(1.8271, 2.01839);
    Complex c2(-4.29183, -2.3456789);
    std::cout << "c1 - " << c1.asString() << '\n';
    std::cout << "c2 - " << c2.asString() << '\n';
    std::cout << "c3 - " << c1.add(c2).asString() << '\n';
    std::cout << "c3 - " << (c1 + c2).asString() << '\n';
    std::cout << "c4 - " << c1.sub(c2).asString() << '\n';
    std::cout << "c4 - " << (c1 - c2).asString() << '\n';
    std::cout << "c5 - " << c1.mul(c2).asString() << '\n';
    std::cout << "c5 - " << (c1 * c2).asString() << '\n';
    std::cout << "c6 - " << c1.div(c2).asString() << '\n';
    std::cout << "c6 - " << (c1 / c2).asString() << '\n';
	std::cout << "c7 - " << c1.abs() << '\n';
	std::cout << '\n';
    return 0;
}

int graphTests() {
	std::cout << "Graph class tests\n";
	Graph g1;
	Graph g2(300, 400, -3.5, 2.1, -1.1, 2.2);
	std::cout << "g1 - " << g1.asString() << '\n';
	std::cout << "g2 - " << g2.asString() << '\n';
	std::cout << "on g1, pixel coord at 123, 234 is " << g1.pixelToCoordinate(123, 234).asString() << '\n';
	std::cout << '\n';
	return 0;
}

int mandelbrotTests() {
	/*
	Graph g1(300, 400, -3.5, 2.1, -1.1, 2.2);
	Mandelbrot mb1(g1);
	mb1.drawToPPM("../temp/test1.ppm");
	*/
	Graph g2;
	Mandelbrot mb2(g2);
	mb2.drawToPPM("../temp/test_output/test.ppm");
	return 0;
}

