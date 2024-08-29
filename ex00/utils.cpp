#include "utils.hpp"

void coutError()
{
	std::cout << "invalid args" << std::endl;
	std::exit(1);
}

void outputChar(char c, bool check)
{
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << c << "'" <<std::endl;
	else if (check == true)
		std::cout << "char: impossible" << std::endl;
	else 
		std::cout << "char: Non displayable" << std::endl;
}

void outputInt(int i, bool check)
{
	if (check == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void outputFloat(float f, int dotCount, int minusCount)
{
	if (minusCount >= 1)
		dotCount++;
	std::cout << "float: " <<std::fixed << std::setprecision(dotCount) << f << "f" <<std::endl;
}

void outputDouble(double d, int dotCount, int minusCount)
{
	if (minusCount >= 1)
		dotCount++;
	std::cout << "double: " << std::fixed << std::setprecision(dotCount) << d << std::endl;
}

void convertToInt(std::string str, int dotCount, int minusCount)
{
	dotCount++;
	if (std::stol(str) > INT_MAX || std::stol(str) < INT_MIN)
		coutError();
	int conv = std::stoi(str);
	char c = static_cast<char>(conv);
	float f = static_cast<float>(conv);
	double d = static_cast<double>(conv);

	outputChar(c, false);
	outputInt(conv, false);
	outputFloat(f, dotCount, minusCount);
	outputDouble(d, dotCount, minusCount);
	std::exit(0);
}

void convertToFloat(std::string str, int dotCount, int minusCount, bool check)
{
	float conv = std::stof(str);
	char c = static_cast<char>(conv);
	int i = static_cast<int>(conv);
	double d = static_cast<double>(conv);

	outputChar(c, check);
	outputInt(i, check);
	outputFloat(conv, dotCount, minusCount);
	outputDouble(d, dotCount, minusCount);
	std::exit(0);
}

void convertToDouble(std::string str, int dotCount, int minusCount, bool check)
{
	double conv = std::stod(str);
	char c = static_cast<char>(conv);
	int i = static_cast<int>(conv);
	float f = static_cast<float>(conv);

	outputChar(c, check);
	outputInt(i, check);
	outputFloat(f, dotCount, minusCount);
	outputDouble(conv, dotCount, minusCount);
	std::exit(0);
}

void convertToChar(std::string str)
{
	char conv = str[0];

	int i = static_cast<int>(conv);
	float f =static_cast<float>(conv);
	double d = static_cast<double>(conv);

	outputChar(conv, false);
	outputInt(i, false);
	outputFloat(f, 1, 0);
	outputDouble(d, 1, 0);
	std::exit(0);
}