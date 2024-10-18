#include <iostream>
#include <cmath>
#include "complex.hpp"

//ctor
my::Complex::Complex(long double x, long double y) : re(x), im(y) {}

//methods
long double my::Complex::Re() const { 
    return re;
}
long double my::Complex::Im() const { 
    return im;
}
long double my::Complex::Abs() const { 
    return sqrt(re*re + im*im); 
}
my::Complex my::Complex::Conj() const { 
    return {re, -im}; 
}

//comparison operators
bool operator==(const my::Complex& z1, const my::Complex& z2) {
    return (z1.Re() == z2.Re()) && (z1.Im() == z2.Im());
}
bool operator!=(const my::Complex& z1, const my::Complex& z2) {
    return !(z1 == z2);
}

//arithmetic operators 
my::Complex operator+(const my::Complex& z1, const my::Complex& z2) {
    return {z1.Re() + z2.Re(), z1.Im() + z2.Im()};
}
my::Complex operator-(const my::Complex& z1, const my::Complex& z2) {
    return {z1.Re() - z2.Re(), z1.Im() - z2.Im()};
}
my::Complex operator*(const my::Complex& z1, const my::Complex& z2) {
    return {z1.Re()*z2.Re() - z1.Im()*z2.Im(), z1.Re()*z2.Im() + z2.Re()*z1.Im()};
}
my::Complex operator/(const my::Complex& z1, const my::Complex& z2) {
    return {(z1.Re()*z2.Re() + z1.Im()*z2.Im())/z2.Re()*z2.Re() + z2.Im()*z2.Im()};
}

//unary operators
my::Complex operator-(const my::Complex& z) {
    return {-z.Re(), -z.Im()};
}
my::Complex operator+(const my::Complex& z) {
    return {z.Re(), z.Im()};
}

//compound assignment operators
my::Complex& operator+=(my::Complex& z1, const my::Complex& z2) {
    return z1 = z1 + z2;
}
my::Complex& operator-=(my::Complex& z1, const my::Complex& z2) {
    return z1 = z1 - z2;
}
my::Complex& operator*=(my::Complex& z1, const my::Complex& z2) {
    return z1 = z1 * z2;
}
my::Complex& operator/=(my::Complex& z1, const my::Complex& z2) {
    return z1 = z1 / z2;
}

//output/input operators
namespace my {

std::ostream& operator<<(std::ostream& out, const my::Complex& z) {
    return out << '(' << z.Re() << ", " << z.Im() << ')';
}
std::istream& operator>>(std::istream& in, my::Complex& z) {
    return in >> z.re >> z.im;
}

}

//custom literals to support algebraic form of my::Complex
my::Complex operator""i(long double y) {
    return {0, y};
}
my::Complex operator""i(unsigned long long int y) {
    return {0, static_cast<long double>(y)};
}