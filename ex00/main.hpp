#ifndef MAIN_HPP
# define MAIN_HPP

template <typename T> T max(T i, T j)
{
	return (i > j) ? i : j;
}

template <typename T> T min(T i, T j)
{
	return (i < j) ? i : j;
}

template <typename T> void swap(T& i, T& j)
{
	T	t;
	t = i;
	i = j;
	j = t;
}

#endif
