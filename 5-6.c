/*
 주소를 반환하는 함수를 만들 때 지역 변수의 주소를 반환하면 경고가 발생하는데, 그것의 예제.
 last modified 2021-08-05
*/
#include <stdio.h>
int* input();
int main(void) {
	int* p = NULL;

	p = input();
	printf("%d \n", *p);

	return 0;
}
int* input() {
	int num1;	// num1은 지역 변수.
	scanf("%d", &num1);
	return &num1;
}