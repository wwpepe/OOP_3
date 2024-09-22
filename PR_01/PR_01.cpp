//(실습1)아래 코드를 실행했을 때의 결과 값(x)은 무엇인가 ?
#include <iostream> 
void increment(int x)
{
	++x;
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(x);
	std::cout << " After increment: " << x << std::endl;
	system("pause");
	return 0;
}
