/*
 Call by reference의 간단한 예제.
 last modified 2021-08-03
*/
#include <stdio.h>

int func(int* i);

int main(void) {
	int a = 10;
	int result = 0;

	result = func(&a);		// a의 주소값을 넘겨줌. -> Call by reference.
	printf("%d \n", result);
	printf("%d \n", a);		// a의 값도 바뀜.

	return 0;
}

int func(int* i) {	// 주소를 받을 수 있는 매개변수 타입은 포인터!
	*i = *i + 1;	// * 연산자 이용해서 받은 주소를 참조함. -> 실제 값이 변경됨!

	return *i;		// 실제 값 전달.
}