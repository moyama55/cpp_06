#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "utils.hpp"

int main()
{
	Base* test = generate();
	identify(test);
	identify(*test);
}