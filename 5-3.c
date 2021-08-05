/*
 1차원 배열의 주소를 저장하는 포인터 변수 p를 이용하여 1차원 배열 요소들의 값에 접근하는 예제.
 last modified 2021-08-05
*/
#include <stdio.h>
void func(int* p, int num);
int main(void) {
	int array[] = { 10,20,30,40,50,60,70,80 };
	func(array, sizeof(array) / sizeof(int));

	return 0;
}
void func(int* p, int num) {
	int i;
	for (i = 0; i < num; i++) {
		printf("%d %d \n", p[i], *(p + i));
	}
}