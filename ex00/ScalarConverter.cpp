#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

void ScalarConverter::convert(std::string str)
{
	int i = 0;
	int minusCount = 0;
	int fCount = 0;
	bool flag = false;
	int dotCount = 0;
	if (str == "nan")
		convertToDouble(str, dotCount, minusCount, true);
	else if (str == "nanf")
		convertToFloat(str, dotCount, minusCount, 0);
	else if (str == "-inf")
		convertToDouble(str, dotCount, 1, true);
	else if (str == "+inf")
		convertToDouble(str, dotCount, 0, true);
	else if (str == "-inff")
		convertToFloat(str, dotCount, 1, 0);
	else if (str == "+inff")
		convertToFloat(str, dotCount, 0, 0);
	else if (str.length() == 1 && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		convertToChar(str);
	while (str[i])
	{
		if (flag == true)
			dotCount++;
		if (str[i] == '.')
			flag = true;
		if (str[i] == '-')
			minusCount++;
		if (str[i] == 'f')
			fCount++;
		if (str[i] == ' ')
			coutError();
		else if(((str[i] < '0' || str[i] > '9') && str[i] != 'f' && str[i] != '.') || minusCount > 1 || fCount > 1)
			coutError();
		i++;
	}
	if (flag == true && fCount == 1)
		convertToFloat(str, dotCount, minusCount, fCount);
	else if (flag == true && fCount == 0)
		convertToDouble(str, dotCount, minusCount, false);
	else
		convertToInt(str, dotCount, minusCount);
}

