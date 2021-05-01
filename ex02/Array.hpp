#include <exception>
#include <iostream>

template <class T>
class Array
{
	public:
		Array():array(NULL), len(0)
		{

		};
		Array(unsigned int n):array(new T[n]()), len(n)
		{

		};
		Array(Array const &other)
		{
			*this = other;
		};
		virtual ~Array()
		{
			delete[] array;
		};

		Array &operator=(Array const &other)
		{
			array = new T[other.size()]();
			len = other.size();
			for (int i = 0; i < other.size(); i++)
				array[i] = other.array[i];
			return (*this);
		};
		int size() const
		{
			return (this->len);
		};
		T &operator[](int i)
		{
			if (i < 0 || len - 1 < i)
				throw Array::OutLimitsException();
			return (this->array[i]);
		}
		class OutLimitsException: public std::exception {
			const char* what() const throw()
			{
				return ("the index is out of limits!");
			};
		};
	private:
		T* array;
		int len;
};
