#include <iostream>
#include <vector>

//����͍\���̂̐錾
struct abc
{
	int a, b, c;
};

//����̓v���g�^�C�v�錾
void maxabc(int _a, int _b, int _c);

int main()
{
	std::vector<int> v{ 1,2,3,4,5 };
	std::cout << "hello, world" << std::endl;

	for (auto& theI : v)
		std::cout << theI << std::endl;
	return 0;
}