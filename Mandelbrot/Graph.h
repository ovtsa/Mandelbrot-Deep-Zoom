#ifndef GRAPH_H
#define GRAPH_H
#include <string>
#include "Complex.h"

#define DEF_PIX_WIDTH 1920
#define DEF_PIX_HEIGHT 1080
#define DEF_X_MIN -2.75
#define DEF_X_MAX 1.75
#define DEF_Y_MIN -1.5
#define DEF_Y_MAX 1.5

class Graph {
	private:
		int pixWidth;
		int pixHeight;
		double xMin;
		double xMax;
		double yMin;
		double yMax;
	public:
		Graph()
			: pixWidth(DEF_PIX_WIDTH)
			, pixHeight(DEF_PIX_HEIGHT)
			, xMin(DEF_X_MIN)
			, xMax(DEF_X_MAX)
			, yMin(DEF_Y_MIN)
			, yMax(DEF_Y_MAX)
			{}
		Graph(int pixWidth, int pixHeight, double xMin, double xMax, double yMin, double yMax)
			: pixWidth(pixWidth)
			, pixHeight(pixHeight)
			, xMin(xMin)
			, xMax(xMax)
			, yMin(yMin)
			, yMax(yMax)
			{}
		int getPixWidth()  { return this->pixWidth; }
		int getPixHeight() { return this->pixHeight; }
		double getXMin()   { return this->xMin; }
		double getXMax()   { return this->xMax; }
		double getYMin()   { return this->yMin; }
		double getYMax()   { return this->yMax; }
		Complex pixelToCoordinate(int pixX, int pixY);
		std::string asString();
};

#endif

