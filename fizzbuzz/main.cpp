#include <iostream>

int main(int const argc, char const * const * argv)
{
	for(unsigned i = 1; i < 101; ++i)
	{
		if( !(i % 15) )
			std::cout << "fizzbuzz\n";
		else if( !(i % 3) )
			std::cout << "fizz\n";
		else if( !(i % 5) )
			std::cout << "buzz\n";
		else
			std::cout << i << std::endl;
	}
	std::cin.get();
	return EXIT_SUCCESS;
}
