#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed &other) : value(other.value) {}

Fixed& Fixed::operator=(const Fixed &other) {
	if (this != &other)
		value = other.value;
	return *this;
}

Fixed::~Fixed() {}

// Construct from int: shift left by fractional bits
Fixed::Fixed(const int n) : value(n << bits) {}

// Construct from float: multiply by scale and round to nearest int
Fixed::Fixed(const float f) :
	value(static_cast<int>(roundf(f * (1 << bits)))) {}

int Fixed::getRawBits(void) const { return value; }
void Fixed::setRawBits(int const raw) { value = raw; }

// Convert fixed-point value to float
float Fixed::toFloat(void) const {
	return static_cast<float>(value) / (1 << bits);
}

// Convert fixed-point value to int (truncates fractional part)
int Fixed::toInt(void) const {
	return value >> bits;
}
// insertion operator prints the floating-point representation
std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}
