#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include "Data.hpp"

class Serialization
{
	private:
		Serialization();
	public:
		~Serialization();
		Serialization(const Serialization& other);
		Serialization& operator=(const Serialization& other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif