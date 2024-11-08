#include "complex.hpp"
#include <iostream>

//TO DO
int main() {

    //Initializations
    my::Complex a(1, 2);
    my::Complex b(1);
    my::Complex c = 1 - 2i;
    my::Complex d = 5i;
    my::Complex f;

    //Input/output
    std::cout << "Enter complex number: ";
    std::cin >> f;
    std::cout <<  "Entered f=" << f << '\n';
    std::cout << "Value of variables: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";

    //arithmetic operations
    std::cout << "1 + (1, 0)=" << 1 + my::Complex(1, 0) << '\n';
    std::cout << "5 - (8, -2)=" << 5 - my::Complex(8, -2) << '\n';
    std::cout << "(2, 2)*(3, 3)=" << my::Complex(2,2)*my::Complex(3,3) << '\n';
    std::cout << "(5, 5)/(5, 5)=" << my::Complex(5,5)/my::Complex(5,5) << '\n';
    //using algebraic form
    std::cout << "Expressions with algebraic form: " << 5 - 9i + 8 + 9i << ' ' << 3i*my::Complex(9, 3) 
            << ' ' << 2 + 3i - (10, 10) << ' ' << my::Complex(0, 3)*my::Complex(9, 3) << '\n';
    //using some functions
    std::cout << "abs(3 + 5i)=" << my::abs(3 + 5i) << '\n';
    std::cout << "conj(3 + 5i)=" << my::conj(3 + 5i) << '\n';
    std::cout << "Re(3 + 5i)=" << my::Re(3 + 5i) << '\n';
    std::cout << "Im(3 + 5i)=" << my::Im(3 + 5i) << '\n';
    std::cout << "arg(-5i)=" << my::arg(-5i) << '\n'; 

}