#include <memory>
#include <stdexcept>
#include "Graph.h"
#include "Complex.h"

std::string Graph::asString() {
    const char *fmt = "Graph:\n\tpixWidth: %d\n\tpixHeight: %d\n\txMin: %f\n\txMax: %f\n\tyMin: %f\n\tyMax: %f";
    int sz = std::snprintf(nullptr, 0, fmt, this->pixWidth, this->pixHeight, this->xMin, this->xMax, this->yMin, this->yMax) + 1;
    if (sz <= 0) { throw std::runtime_error("Error during formatting."); }
    std::unique_ptr<char[]> buf(new char[sz]);
    snprintf(buf.get(), sz, fmt, this->pixWidth, this->pixHeight, this->xMin, this->xMax, this->yMin, this->yMax);
    return std::string(buf.get(), buf.get() + sz - 1);
}

Complex Graph::pixelToCoordinate(int pixX, int pixY) {
	double dx = (this->xMax - this->xMin) / pixWidth;
	double dy = (this->yMax - this->yMin) / pixHeight;
	Complex c(this->xMin + (pixX * dx), this->yMax - (pixY * dy));
	return c;
}

