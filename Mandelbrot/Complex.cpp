#include <memory>
#include <stdexcept>
#include <cmath>
#include <string>
#include "Complex.h"

Complex Complex::add(Complex &c2) {
	Complex c3;
	c3.real = this->real + c2.real;
	c3.img  = this->img  + c2.img;
	return c3;
}

Complex Complex::sub(Complex &c2) {
	Complex c3;
	c3.real = this->real - c2.real;
	c3.img  = this->img  - c2.img;
	return c3;
}

Complex Complex::mul(Complex &c2) {
	Complex c3;
	c3.real = (this->real * c2.real) + (this->img * c2.img * -1);
	c3.img = (this->real * c2.img) + (this->img * c2.real);
	return c3;
}

Complex Complex::div(Complex &c2) {
	Complex c3;
	Complex bconj(c2.real, c2.img * -1);
	Complex num = *this * bconj;
	Complex den = c2 * bconj;
	c3.real = num.real / den.real;
	c3.img  = num.img  / den.real;
	return c3;
}

double Complex::abs() {
	return std::sqrt((this->real * this->real) + (this->img * this->img));
}

std::string Complex::asString() {
	const char *fmt = "Complex: (%f + %fi)";
	int sz = std::snprintf(nullptr, 0, fmt, this->real, this->img) + 1;
	if (sz <= 0) { throw std::runtime_error("Error during formatting."); }
	std::unique_ptr<char[]> buf(new char[sz]);
	snprintf(buf.get(), sz, fmt, this->real, this->img);
	return std::string(buf.get(), buf.get() + sz - 1);
}
