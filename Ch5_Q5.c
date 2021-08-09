/*
 Ch5 연습문제 5번 풀이.
 last modified 2021-08-10
*/
#include <stdio.h>

void swap(int** q1, int** q2);

int main(void) {
	int a = 10, b = 20;

	int* p1 = NULL, * p2 = NULL;

	p1 = &a;
	p2 = &b;

	printf("------------함수 호출 전------------\n");
	printf("a = %d, b = %d \n", a, b);
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);

	swap(&p1, &p2);		// 포인터 변수의 주소를 인자로 넘겨줌. -> 매개변수의 타입이 2차원 포인터 변수!

	printf("------------함수 호출 후------------\n");
	printf("a = %d, b = %d \n", a, b);				// 그대로.
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);		// 포인터 값만 바뀜!

	return 0;
}
// 1차원 포인터 변수 p1과 p2가 가리키고 있는 공간만 바뀌게 된다. = 저장하고 있던 주소가 바뀐다.
// == 실제값은 그대로고, 포인터 변수의 값(= 주소값)만 서로 바뀐다.
void swap(int** q1, int** q2) {
	int* temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}