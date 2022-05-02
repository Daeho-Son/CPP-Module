#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T* arr, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
	std::cout << std::endl;
}

template<typename T>
void print(T x)
{
	std::cout << x << " ";
}

template<typename T>
void plus_one(T x)
{
	std::cout << static_cast<T>(x + 1) << " ";
}

#endif