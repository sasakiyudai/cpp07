#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<int> int_arr(5);
	Array<double> db_arr(5);
	Array<std::string> str_arr(5);
	std::string strs[5] = {"gendo", "shinji", "misato", "asuka", "rei"};

	for (int i = 0; i < 5; i++)
	{
		int_arr[i] = i;
		db_arr[i] = i * 1.1;
		str_arr[i] = strs[i];
	}

	for (int i = 0; i < int_arr.size(); i++)
		std::cout << int_arr[i] << " ";
	std::cout << std::endl;

	Array<std::string> str_arr_copy(str_arr);
	for (int i = 0; i < str_arr_copy.size(); i++)
		std::cout << str_arr_copy[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < db_arr.size(); i++)
		std::cout << db_arr[i] << " ";
	std::cout << std::endl;
	try
	{
		std::cout << db_arr[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}