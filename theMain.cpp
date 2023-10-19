#include <iostream>
#include <vector>

//これは構造体の宣言
struct abc
{
	int a, b, c;
};

//これはプロトタイプ宣言
void maxabc(int _a, int _b, int _c);

int main()
{
	std::vector<int> v{ 1,2,3,4,5 };
	std::cout << "hello, world" << std::endl;

	for (auto& theI : v)
		std::cout << theI << std::endl;
	return 0;
}