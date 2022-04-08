#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		float fixed_point_;
		static const int fractional_bits_count_;

	public:
		Fixed();
		Fixed(const Fixed& fixed);
		~Fixed();

		Fixed& operator=(const Fixed& fixed);

		int getRawBits(void) const;
		void setRawBits(const int raw);
};

#endif