#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T& x, T& y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T min(const T& x, const T& y)
{
	if (x > y)
		return (y);
	return (x);
}

template<typename T>
T max(const T& x, const T&y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif
