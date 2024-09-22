//(실습3)위의 프로그램이 "c++의 레퍼런스 (&)"를 활용하여 increment 함수의 인풋값을 + 1 증가시켜 프린트하도록 수정하세요(즉, std::cout << " After increment: " << x << std::endl; 에서 56이 프린트 되어야 함).
//(실습4)rvalue와 lvalue에 대한 개념 학습 후 다음 문제를 풀어보세요.

	//(1) 아래의 코드를 참고하여 괄호의 값을 rvalue와 lvalue로 구분해 보세요. (a, b, c, 5, a + b)
	// 답 : lvalue (메모리 사용) : a, b, c / rvalue (임시적인 값) : 5, a+b
	
	//(2) 다음 소스 코드를 수정하여 x 값이 2로 출력되도록 해보세요(레퍼런스 사용).

int a = 5;
int b = a;
int c = a + b;

#include <iostream>
int &func(int& a) { return a; } //래퍼런스를 반환함수 (즉, 인자의 주소를 반환하는 함수)
int main() {
	int x = 1;
	std::cout << func(x)++ << std::endl;
	std::cout << x << std::endl;
}