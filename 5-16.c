/*
 void형 포인터 변수를 강제 형변환하여 포인터가 가리키고 있는 변수의 실제값을 변경해 보는 예제.
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
	printf("----------------------------------\n");

	vx = &c;
	*(char*)vx = 5;		// 강제 형변환을 하여 변수에 저장된 값을 변경할 수도 있음!
	printf("vx가 저장한 값(= 주소) : %x \n", vx);
	printf("c가 저장한 값 : %d \n", c);
	printf("*vx의 값 : %d \n", *(char*)vx);

	vx = &d;
	*(double*)vx = 5.1;		// 강제 형변환으로 변수에 저장된 값을 변경.
	printf("vx가 저장한 값(= 주소) : %x \n", vx);
	printf("d가 저장한 값 : %lf \n", d);
	printf("*vx의 값 : %lf \n", *(double*)vx);


	return 0;
}