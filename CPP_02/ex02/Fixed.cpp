#include "Fixed.hpp"

Fixed::Fixed() : _fix(0) {}

Fixed::Fixed(const Fixed &other) : _fix(other._fix) {}

Fixed& Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_fix = other._fix;
	return *this;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int n) : _fix(n << _bit) {}

Fixed::Fixed(const float f) : _fix(static_cast<int>(roundf(f * (1 << _bit)))) {}

int Fixed::getRawBits(void) const {
	return _fix;
}

void Fixed::setRawBits(int const raw) {
	_fix = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_fix) / (1 << _bit);
}

int Fixed::toInt(void) const {
	return _fix / (1 << _bit);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed res;
	res._fix = this->_fix + other._fix;
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed res;
	res._fix = this->_fix - other._fix;
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed res;
	long tmp = static_cast<long>(this->_fix) * static_cast<long>(other._fix);
	res._fix = static_cast<int>(tmp >> _bit);
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const {
	if (other._fix == 0)
		throw std::runtime_error("Division by zero");
	Fixed res;
	long tmp = (static_cast<long>(this->_fix) << _bit) / static_cast<long>(other._fix);
	res._fix = static_cast<int>(tmp);
	return res;
}

bool Fixed::operator>(const Fixed &other) const { return _fix > other._fix; }
bool Fixed::operator<(const Fixed &other) const { return _fix < other._fix; }
bool Fixed::operator>=(const Fixed &other) const { return _fix >= other._fix; }
bool Fixed::operator<=(const Fixed &other) const { return _fix <= other._fix; }
bool Fixed::operator==(const Fixed &other) const { return _fix == other._fix; }
bool Fixed::operator!=(const Fixed &other) const { return _fix != other._fix; }

Fixed& Fixed::operator++() {
	++_fix;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++_fix;
	return tmp;
}
Fixed& Fixed::operator--() {
	--_fix;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--_fix;
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a._fix < b._fix) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	return (a._fix < b._fix) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a._fix > b._fix) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	return (a._fix > b._fix) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}