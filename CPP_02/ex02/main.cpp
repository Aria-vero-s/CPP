#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fix;
	float _flt;
	int _bit = 8;

public:
	// default
	Fixed() : _fix(0)
	{
		//std::cout << "Default constructor called " << std::endl;
	}
	// copy entier constant
	Fixed(int nb)
	{
		//std::cout << "Int constructor called " << std::endl;
		_fix = nb * 256;
	}
	// copy flottant
	Fixed(const float flt)
	{
		//std::cout << "Float constructor called " << std::endl;
		_fix = static_cast<int>(roundf(flt * (1 << 8)));
	}
	// copy objet
	Fixed(const Fixed &other)
	{
		//std::cout << "Copy constructor called " << std::endl;
		*this = other;
	}
	// copy assignement Operator
	Fixed& operator=(const Fixed &other)
	{
		//std::cout << "Copy assignement operator called " << std::endl;
		if (this != &other)
			_fix = other._fix;
		return *this;
	}
	// copy objet * objet
	Fixed operator*(const Fixed &other) const{
		return Fixed(this->toFloat() * other.toFloat());
	}
	Fixed operator+(const Fixed &other) const{
		return Fixed(this->toFloat() + other.toFloat());
	}
	Fixed operator-(const Fixed &other) const{
		return Fixed(this->toFloat() - other.toFloat());
	}
	Fixed operator/(const Fixed &other) const{
		return Fixed(this->toFloat() / other.toFloat());
	}
	int operator>(const Fixed &other) const{
		if ((this->toFloat() > other.toFloat()))
			return 1;
		else
			return 0;
	}
	int operator<(const Fixed &other) const{
		if ((this->toFloat() < other.toFloat()))
			return 1;
		else
			return 0;
	}
	int operator>=(const Fixed &other) const{
		if ((this->toFloat() >= other.toFloat()))
			return 1;
		else
			return 0;
	}
	int operator<=(const Fixed &other) const{
		if ((this->toFloat() <= other.toFloat()))
			return 1;
		else
			return 0;
	}
	int operator==(const Fixed &other) const{
		if ((this->toFloat() == other.toFloat()))
			return 1;
		else
			return 0;
	}
	int operator!=(const Fixed &other) const{
		if ((this->toFloat() != other.toFloat()))
			return 1;
		else
			return 0;
	}
	Fixed& operator++() {
		this->_fix++;
		return (*this);
	}
	Fixed& operator--() {
		this->_fix--;
		return (*this);
	}
	Fixed operator++(int) {
		Fixed tmp(*this);
		this->_fix++;
		return (tmp);
	}
	Fixed operator--(int) {
		Fixed tmp(*this);
		this->_fix--;
		return (tmp);
	}
	~Fixed(){}
	int getRawBits() const
	{
		return 0;
	}
	int toInt() const {
		return _fix >> _bit;
	}
	float toFloat() const {
		return static_cast<float>(_fix) / (1 << _bit);
	}
	static float max( Fixed a , Fixed b) {
		if (a._fix > b._fix){
			return a.toFloat();
		}
		else
			return b.toFloat();
	}
	static float min( Fixed a , Fixed b) {
		if (a._fix < b._fix){
			return a.toFloat();
		}
		else
			return b.toFloat();
	}
/* 	Fixed operator>() {
		Fixed tmp(*this);
		this->_fix--;
	return (tmp);
	} */


};

std::ostream &operator<<(std::ostream &os, const Fixed &f){
	os << f.toFloat();
	return os;
}

int main(){
	Fixed 	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2)); 
	
	std::cout << "a : " <<  a << std::endl << std::endl;
	std::cout << "a : " <<  ++a << std::endl;
	std::cout << "a : " <<  a << std::endl;
	std::cout << "a : " <<  a++ << std::endl;
	std::cout << "Final a : " <<  a << std::endl;
	
	std::cout << "b : " <<  b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	
	std::cout << "a : " <<  a << std::endl;
	std::cout << "a : " <<  --a << std::endl;
	std::cout << "a : " <<  a << std::endl;
	std::cout << "a : " <<  a-- << std::endl;
	std::cout << "Final a : " <<  a << std::endl << std::endl;
	
	Fixed const	c(Fixed(5.05f) + Fixed(2)); 
	Fixed const	d(Fixed(5.05f) - Fixed(2)); 
	Fixed const	e(Fixed(5.05f) / Fixed(2));
	
	//Fixed const	f(Fixed(5.05f) > Fixed(2)); 
	
	std::cout << "c (Fixed(5.05f) + Fixed(2): " <<  c << std::endl;
	std::cout << "d (Fixed(5.05f) - Fixed(2): " <<  d << std::endl;
	std::cout << "e (Fixed(5.05f) / Fixed(2): " <<  e << std::endl << std::endl;
	
	Fixed const	g(100);
	Fixed const	h(0);
	
	if (a > b)
		std::cout << "a > b" << std::endl; 
	else
		std::cout << "a < b" << std::endl; 
	if (g > b)
		std::cout << "g > b" << std::endl; 
	else
		std::cout << "g < b" << std::endl; 
	if (a >= b)
		std::cout << "a >= b" << std::endl; 
	else
		std::cout << "a <= b" << std::endl; 
	if (g <= b)
		std::cout << "g <= b" << std::endl; 
	else
		std::cout << "g >= b" << std::endl; 
	if (a == b)
		std::cout << "a == b" << std::endl; 
	else
		std::cout << "a != b" << std::endl; 
	if (g != b)
		std::cout << "g != b" << std::endl; 
	else
		std::cout << "g == b" << std::endl; 
	if (h == a)
		std::cout << "h == a" << std::endl; 
	else
		std::cout << "h != a" << std::endl; 


}