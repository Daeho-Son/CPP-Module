#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_point_;
		static const int fractional_bits_ = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& fixed);
		~Fixed();

		Fixed& operator=(const Fixed& fixed);

		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
		// int getFixed() const
		// {
		// 	return (fixed_point_);
		// }
		// float getFloatFixed() const
		// {
		// 	return (fixed_point_);
		// }
};

std::ostream &operator<<(std::ostream &o_stream, const Fixed &fixed);

#endif