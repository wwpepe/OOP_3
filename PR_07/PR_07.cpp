//(실습7)다음 프로그램을 실행해보고, "포인터"와 "c++의 레퍼런스 (&)"의 차이점을 서술하세요.
#include <iostream>
int main() {
	
	int num = 10;
	std::cout << "int num 주소 : 0x" << &num << std::endl \
		<< "int num 값 : " << num << std::endl << std::endl;
	//래퍼런스는 특정 변수 자체를 칭하는 별칭이므로 num과 같은 주소값을 가짐
	int& ref = num;
	std::cout << "레퍼런스 주소 : 0x" << &ref << std::endl \
		<< "레퍼런스가 참조하는 값 : " << ref << std::endl << std::endl;
	//포인터는 특정 변수를 참조하는 변수로 자신의 메모리 공간을 가지고 있기 때문에 num과 다른 주소값을 가짐
	int* ptr = &num;
	std::cout << "포인터 주소 : 0x" << &ptr << std::endl \
		<< "포인터가 참조하는 값 : " << *ptr << std::endl;
	return 0;
}