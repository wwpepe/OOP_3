//(실습5)아래 코드의 컴파일 에러를 수정하세요.단, x의 타입(레퍼런스)은 유지되어야 합니다.
#include <iostream> 
int main()
{
	 int a = 5;
	 int& x = a; //a를 선언하지 않고 래퍼런스 변수에 const를 선언하는 것도 가능
	std::cout << x << std::endl;
}
