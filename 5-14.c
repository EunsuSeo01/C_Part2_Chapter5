/*
 void형 포인터 예제.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(void) {
	char c = 3;
	double d = 3.1;
	
	void* vx = NULL;	// void형 포인터 변수는 다양한 자료형의 주소를 저장할 수 있다.

	vx = &c;	// char형 변수의 주소를 저장할 수 있다.
	printf("vx의 주소값 : %x \n", vx);
	// printf("vx의 값 : %d \n", *vx);		// 에러. -> 주소만 저장하고 있음!! 값에는 접근 불가.

	vx = &d;	// double형 변수의 주소를 저장할 수 있다.
	printf("vx의 주소값 : %x \n", vx);
	// printf("vx의 값 : %lf \n", *vx);		// 에러. -> 주소만 저장 가능. 값 저장이나 변경은 불가.

	return 0;
}