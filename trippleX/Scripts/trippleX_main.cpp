#include <iostream> // includes do not need ; to function (formal name: Preprocessor Directive)

int main()
{

	std::cout << "you apporach the fork in the road\n"; // std is short for standard - it's a namespace. the :: is a scope operator. it is was c# it would look somting like this std.cout("Hello World");
	std::cout << std::endl; // std::endl or \n in a sting can do a line return
	std::cout << "one way is the right way and one leeds to doom\n";

	int numberOne = 4;
	int numberTwo = 2;
	int numberThree = 9;
	
	int sum = numberOne + numberTwo + numberThree;
	int product = numberOne * numberTwo * numberThree;	

	std::cout << "sum: ";
	std::cout << sum;
	std::cout << std::endl;
	std::cout << "Product: ";
	std::cout << product;
	std::cout << std::endl;

	return 0;
}