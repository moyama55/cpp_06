#include "Serialization.hpp"
#include "Data.hpp"

int main()
{
	// Serialization a;
	Data test;
	Data *test2;
	test.name = "abcd";
	test.num = 10;
	
	std::cout << test.name << std::endl;
	std::cout << test.num << std::endl;

	uintptr_t tmp = Serialization::serialize(&test);
	test2 = Serialization::deserialize(tmp);

	std::cout << test2->name << std::endl;
	std::cout << test2->num << std::endl;
}