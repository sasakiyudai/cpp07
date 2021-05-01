#include "iter.hpp"
#include <string>

int main()
{
	int int_arr[] = {1,2,3,4,5};
	double db_arr[] = {1.1,2.2,3.3,4.4,5.5};
	std::string str_arr[] = {"aa", "bb", "cc", "dd", "ee"};
	char chr_arr[] = {'A', 'B', 'C', 'D', 'E'};

	iter(int_arr, 5, print);
	iter(int_arr, 5, doubleUp);
	std::cout << "-" << std::endl;
	iter(int_arr, 5, print);
	std::cout << "-" << std::endl;

	iter(db_arr, 5, print);
	iter(db_arr, 5, doubleUp);
	std::cout << "-" << std::endl;
	iter(db_arr, 5, print);
	std::cout << "-" << std::endl;

	iter(str_arr, 5, print);
	iter(str_arr, 5, plusTilde);
	std::cout << "-" << std::endl;
	iter(str_arr, 5, print);
	std::cout << "-" << std::endl;
	
	iter(chr_arr, 5, print);
	iter(chr_arr, 5, plusTwo);
	std::cout << "-" << std::endl;
	iter(chr_arr, 5, print);
}