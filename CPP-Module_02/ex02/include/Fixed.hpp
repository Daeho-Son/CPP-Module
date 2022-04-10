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

		Fixed operator+(const Fixed& fixed);
		Fixed operator-(const Fixed& fixed);
		Fixed operator*(const Fixed& fixed);
		Fixed operator/(const Fixed& fixed);

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		bool operator>(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;

		static Fixed& min(Fixed& fixed_a, Fixed& fixed_b);
		static const Fixed& min(const Fixed& fixed_a, const Fixed& fixed_b);
		static Fixed& max(Fixed& fixed_a, Fixed& fixed_b);
		static const Fixed& max(const Fixed& fixed_a, const Fixed& fixed_b);

		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o_stream, const Fixed &fixed);

#endif