#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

class Complex {
	public:
		double real;
		double img;
		Complex() : real(0), img(0) {}
		Complex(double real, double img) : real(real), img(img) {}
		Complex add(Complex &c2);
		Complex sub(Complex &c2);
		Complex mul(Complex &c2);
		Complex div(Complex &c2);
		double abs();
		Complex operator+(Complex &c2) { return Complex::add(c2); }
		Complex operator-(Complex &c2) { return Complex::sub(c2); }
		Complex operator*(Complex &c2) { return Complex::mul(c2); }
		Complex operator/(Complex &c2) { return Complex::div(c2); }
		std::string asString();
};

#endif

