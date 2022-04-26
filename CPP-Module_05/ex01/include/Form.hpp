#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	protected:
		const std::string name_;
		const int grade_to_signed_;
		const int grade_to_execute_;
	public:
		Form();
		Form(const Form& form);
		~Form();

		Form& operator=(const Form& form);
};

#endif
