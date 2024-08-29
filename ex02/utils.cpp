#include "utils.hpp"

Base *generate(void)
{
	srand((unsigned int)time(NULL));
	int num = rand() % 3;
	if (num == 0)
		return new A();
	else if (num == 1)
		return new B();
	else if (num == 2)
		return new C();
	return NULL;
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout  << "A" << std::endl;
	else if (b != NULL)
		std::cout  << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout  << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// std::cerr << e.what() << '\n';
	}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout  << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// std::cerr << e.what() << '\n';
	}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout  << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::bad_cast& e)
	{
		// std::cerr << e.what() << '\n';
	}
}