#include <iostream> // includes do not need ; to function (formal name: Preprocessor Directive)

int main()
{

	std::cout << "you apporach the fork in the road\n"; // std is short for standard - it's a namespace. the :: is a scope operator. it is was c# it would look somting like this std.cout("Hello World");
	std::cout << std::endl; // std::endl or \n in a sting can do a line return
	std::cout << "one way is the right way and one leeds to doom\n";

	const int PuzzleNumberOne = 4;
	const int PuzzleNumberTwo = 2;
	const int PuzzleNumberThree = 9;
	
	int PuzzleSum = PuzzleNumberOne + PuzzleNumberTwo + PuzzleNumberThree;
	int PuzzleProduct = PuzzleNumberOne * PuzzleNumberTwo * PuzzleNumberThree;	

	std::cout << "you see a signg pointing in each direction, the correct sign display 3 number that\n";
	std::cout << "add up to " << PuzzleSum << std::endl; // if i use << again i can pas another arguement to the terminal
	std::cout << "and multiply to togeher to get " << PuzzleProduct << std::endl;	
	return 0;
}