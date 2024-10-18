#include <iosfwd>

namespace my {

class Complex {

  public:  
    Complex(long double = 0.0, long double = 0.0);
    long double Re() const;
    long double Im() const;
    long double Abs() const;
    Complex Conj() const;



  private:   
    long double re;
    long double im;

    friend std::istream& operator>>(std::istream& in, Complex& z);

};

}

bool operator==(const my::Complex& z1, const my::Complex& z2);
bool operator!=(const my::Complex& z1, const my::Complex& z2);

//arithmetic operators 
my::Complex operator+(const my::Complex& z1, const my::Complex& z2);
my::Complex operator-(const my::Complex& z1, const my::Complex& z2);
my::Complex operator*(const my::Complex& z1, const my::Complex& z2);
my::Complex operator/(const my::Complex& z1, const my::Complex& z2);

//unary operators
my::Complex operator-(const my::Complex& z);
my::Complex operator+(const my::Complex& z);

//compound assignment operators
my::Complex& operator+=(my::Complex& z1, const my::Complex& z2);
my::Complex& operator-=(my::Complex& z1, const my::Complex& z2);
my::Complex& operator*=(my::Complex& z1, const my::Complex& z2);
my::Complex& operator/=(my::Complex& z1, const my::Complex& z2);

namespace my {
//output/input operators
std::ostream& operator<<(std::ostream& out, const my::Complex& z);
std::istream& operator>>(std::istream& in, my::Complex& z);
}

//custom literals to support algebraic form of my::Complex
my::Complex operator""i(long double y);
my::Complex operator""i(unsigned long long int y);

//some function just to match math
my::Complex abs(const my::Complex& z);
my::Complex conj(const my::Complex& z);
my::Complex Re(const my::Complex& z);
my::Complex Im(const my::Complex& z);