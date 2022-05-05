#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int x)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw std::out_of_range("Out of range");
	return (it);
}

template<typename T>
typename T::const_iterator easyfind(const T& container, int x)
{
	typename T::const_iterator c_it;
	c_it = std::find(container.begin(), container.end(), x);
	if (c_it == container.end())
		throw std::out_of_range("Out of range");
	return (c_it);
}

#endif
