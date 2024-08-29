#ifndef UTILS_HPP

#define UTILS_HPP
#include <iostream>
#include <string>
#include <iomanip>

void coutError();
void convertToInt(std::string str, int dotCount, int minusCount);
void convertToFloat(std::string str, int dotCount, int minusCount, bool check);
void convertToDouble(std::string str, int dotCount, int minusCount, bool check);
void convertToChar(std::string str);
void outputChar(char c, bool check);
void outputInt(int i, bool check);
void outputFloat(float f, int dotCount, int minusCount);
void outputDouble(double d, int dotCount, int minusCount);


#endif