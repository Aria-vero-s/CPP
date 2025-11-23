#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(1);
	Fixed d(0);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	try {
		std::cout << c/d << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}