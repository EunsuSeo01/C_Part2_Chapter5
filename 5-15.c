/*
 void형 포인터 변수 vx에 강제 형변환을 하여 *vx 값을 출력하는 예제.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(void) {
	char c = 3;
	double d = 3.1;

	void* vx = NULL;	// void형 포인터 변수 선언.

	vx = &c;
	printf("vx가 저장한 값(= 주소) : %x \n", vx);
	printf("*vx의 값 : %d \n", *(char*)vx);		// (char*로) 강제 형변환.

	vx = &d;
	printf("vx가 저장한 값(= 주소) : %x \n", vx);
	printf("*vx의 값 : %lf \n", *(double*)vx);	// (double*로) 강제 형변환.

	return 0;
}