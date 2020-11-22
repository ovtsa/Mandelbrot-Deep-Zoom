#include <iostream>
#include "Complex.h"

int complexTests() {
    Complex c1(1.8271, 2.01839);
    Complex c2(-4.29183, -2.3456789);
    std::cout << "c1: " << c1.asString() << '\n';
    std::cout << "c2: " << c2.asString() << '\n';
    std::cout << "c3: " << c1.add(c2).asString() << '\n';
    std::cout << "c3: " << (c1 + c2).asString() << '\n';
    std::cout << "c4: " << c1.sub(c2).asString() << '\n';
    std::cout << "c4: " << (c1 - c2).asString() << '\n';
    std::cout << "c5: " << c1.mul(c2).asString() << '\n';
    std::cout << "c5: " << (c1 * c2).asString() << '\n';
    std::cout << "c6: " << c1.div(c2).asString() << '\n';
    std::cout << "c6: " << (c1 / c2).asString() << '\n';
    return 0;
}

