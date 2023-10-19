#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{ 1,2,3,4,5 };
	std::cout << "hello, world" << std::endl;

	for (auto& theI : v)
		std::cout << theI << std::endl;
	return 0;
}