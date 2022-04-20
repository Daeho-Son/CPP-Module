#include "../include/Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_point_ = 0;
}

Fixed::Fixed(const int input_n)
{
	// std::cout << "Int constructor called" << std::endl;
	fixed_point_ = input_n << fractional_bits_;
}

Fixed::Fixed(const float input_f)
{
	// std::cout << "Float constructor called" << std::endl;
	fixed_point_ = roundf(input_f * (1 << fractional_bits_));
}

Fixed::Fixed(const Fixed& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& o_stream, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (o_stream);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_ = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed temp;

	temp.setRawBits(fixed_point_ + fixed.fixed_point_);
	return (temp);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed temp;

	temp.setRawBits(fixed_point_ - fixed.fixed_point_);
	return (temp);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed temp;

	temp.setRawBits((fixed_point_ * fixed.fixed_point_) / (1 << fractional_bits_));
	return (temp);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed temp;
	
	temp.setRawBits(fixed_point_ * (1 << fractional_bits_) / fixed.fixed_point_);
	return (temp);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (fixed_point_ > fixed.fixed_point_);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (fixed_point_ < fixed.fixed_point_);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (fixed_point_ >= fixed.fixed_point_);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (fixed_point_ <= fixed.fixed_point_);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (fixed_point_ == fixed.fixed_point_);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (fixed_point_ != fixed.fixed_point_);
}

Fixed& Fixed::operator++()
{
	fixed_point_++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed& Fixed::operator--()
{
	fixed_point_--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

Fixed& Fixed::min(Fixed& fixed_a, Fixed& fixed_b)
{
	if (fixed_a.fixed_point_ < fixed_b.fixed_point_)
		return (fixed_a);
	return (fixed_b);
}

const Fixed& Fixed::min(const Fixed& fixed_a, const Fixed& fixed_b)
{
	if (fixed_a.fixed_point_ < fixed_b.fixed_point_)
		return (fixed_a);
	return (fixed_b);
}

Fixed& Fixed::max(Fixed& fixed_a, Fixed& fixed_b)
{
	if (fixed_a.fixed_point_ > fixed_b.fixed_point_)
		return (fixed_a);
	return (fixed_b);
}

const Fixed& Fixed::max(const Fixed& fixed_a, const Fixed& fixed_b)
{
	if (fixed_a.fixed_point_ > fixed_b.fixed_point_)
		return (fixed_a);
	return (fixed_b);
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