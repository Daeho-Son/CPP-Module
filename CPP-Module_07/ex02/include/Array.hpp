#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private:
		T* arr_;
		unsigned int size_;

	public:
		Array()
		{
			std::cout << "Array 기본 생성자 호출" << std::endl;
			arr_ = new T;
		}

		Array(unsigned int n)
		{
			std::cout << "Array 생성자(usigned int) 호출" << std::endl;
			size_ = n;
			arr_ = new T[n];
		}

		Array(const Array& array)
		{
			std::cout << "Array 복사 생상자 호출" << std::endl;
			size_ = array.size();
			arr_ = new T[size_];
			for (unsigned int i = 0; i < size_; i++)
			{
				arr_[i] = array.arr_[i];
			}
		}

		~Array()
		{
			std::cout << "Array 소멸자 호출" << std::endl;
			if (arr_ != NULL)
				delete[] arr_;
		}

		Array& operator=(const Array& array)
		{
			std::cout << "Array 할당 연산자" << std::endl;
			if (arr_ != NULL)
			{
				delete[] arr_;
			}
			size_ = array.size();
			arr_ = new T(size_);
			for (unsigned int i = 0; i < size_; i++)
			{
				arr_[i] = array.arr_[i];
			}
			return (*this);
		}

		const T operator[](unsigned int index) const
		{
			if (index > size_ - 1)
				throw OutOfRangeException();
			return (arr_[index]);
		}

		T& operator[](unsigned int index)
		{
			if (index > size_ - 1)
				throw OutOfRangeException();
			return (arr_[index]);
		}

		unsigned int size() const
		{
			return (size_);
		}

		class OutOfRangeException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Array::OutOfRangeException()");
			}
		};
};

#endif
