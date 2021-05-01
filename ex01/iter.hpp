#include <iostream>

template<class T>
void iter(T *array, int len, void (*f)(T &t))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template<class T>
void print(T &t)
{
	std::cout << t << std::endl;
}

template<class T>
void doubleUp(T &t)
{
	t *= 2;
}

template<class T>
void plusTwo(T &t)
{
	t += 2;
}

template<class T>
void plusTilde(T &t)
{
	t += 126;
}
