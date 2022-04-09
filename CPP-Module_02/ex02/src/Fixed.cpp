#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_ = 0;
}

Fixed::Fixed(const int input_n)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_ = input_n << fractional_bits_;
}

Fixed::Fixed(const float input_f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_ = roundf(input_f * (1 << fractional_bits_));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_ = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& o_stream, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (o_stream);
}

int Fixed::getRawBits(void) const
{
	return (fixed_point_);
}

void Fixed::setRawBits(const int raw)
{
	fixed_point_ = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(fixed_point_) / (1 << fractional_bits_));
}

int Fixed::toInt(void) const
{
	return (fixed_point_ >> fractional_bits_);
}