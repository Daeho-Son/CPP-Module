#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <exception>

class Converter
{
	private:
		double base_;

		Converter();
		Converter(const Converter& converter);
		Converter& operator=(const Converter& converter);

	public:
		Converter(char* c);
		~Converter();

		char toChar();
		int toInt();
		float toFloat();
		double toDouble();
		void Print();

		class ConstructorErrorException : public std::exception
		{
			const char* what() const throw();
		};

		class CharNonDisplayableException : public std::exception
		{
			const char* what() const throw();
		};

		class CharImpossibleException : public std::exception
		{
			const char* what() const throw();
		};
		
		class IntImpossibleException : public std::exception
		{
			const char* what() const throw();
		};
};

#endif
