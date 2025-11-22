#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	// Fixed a;
	// Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed a(1);
	Fixed b(0);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << a/b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

// int	main( void ) {

// 	std::cout << std::endl << "\033[1m\033[38;5;226m" << "----- Standard tests -----" << "\033[0m" << std::endl << std::endl;
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));


// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max(a, b) << std::endl;

// 	Fixed c = 0;

// 	std::cout << std::endl << "\033[1m\033[38;5;226m" << "----- Other tests -----" << "\033[0m" << std::endl << std::endl;


// 	std::cout << "\033[1m" << "a    : " << a << "\033[0m" << std::endl;
// 	std::cout << "\033[1m" << "b    : " << b << "\033[0m" << std::endl;
// 	std::cout << "\033[1m" << "c    : " << c << "\033[0m" << std::endl;
// 	try {
// 		std::cout << b / c << std::endl;
// 	} catch (const std::exception& e) {
// 		std::cerr  << "b / c                        : " << "Error: Division by zero" << std::endl;
// 	}
// 	std::cout << "Fixed(3.0f) / Fixed(2.0f)    : " << Fixed(3.0f) / Fixed(2.0f) << std::endl
// 	<< "Fixed(3)    / Fixed(2)       : " << Fixed(3) / Fixed(2) << std::endl
// 	<< "Fixed(3.0f) * Fixed(2.0f)    : " << Fixed(3.0f) * Fixed(2.0f) << std::endl
// 	<< "Fixed(3)    * Fixed(2)       : " << Fixed(3) * Fixed(2) << std::endl
// 	<< "Fixed::max(a, b)             : " << Fixed::max(a, b) << std::endl
// 	<< "Fixed::min(a, b)             : " << Fixed::min(a, b) << std::endl
// 	<< "a > b                        : " << (a > b) << std::endl
// 	<< "a < b                        : " << (a < b) << std::endl
// 	<< "a >= b                       : " << (a >= b) << std::endl
// 	<< "a <= b                       : " << (a <= b) << std::endl
// 	<< "a == b                       : " << (a == b) << std::endl
// 	<< "a != b                       : " << (a != b) << std::endl
// 	<< "a + b                        : " << (a + b) << std::endl
// 	<< "a - b                        : " << (a - b) << std::endl
// 	<< "b + a                        : " << (b + a) << std::endl
// 	<< "b - a                        : " << (b - a) << std::endl;

// 	std::cout << std::endl << "\033[1m\033[38;5;226m" << "----- Ending main -----" << "\033[0m" << std::endl << std::endl;

// 	return 0;
// }