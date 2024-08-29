#include <iostream>
#include "ScalarConverter.hpp"
#include "utils.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string str(argv[1]);
	ScalarConverter::convert(str);
}