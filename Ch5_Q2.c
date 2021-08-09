/*
 Ch5 연습문제 2번 풀이.
 last modified 2021-08-09
*/
#include <stdio.h>
// 1: 함수의 선언부.
void func(int* a1, int(*a2)[2]);
int main(void) {
	int array1[4] = { 10,20,30,40 };	// 1차원 배열.
	int array2[2][2] = { 50,60,70,80 };	// 2차원 배열.

	func(array1, array2);
	return 0;
}
// 2: 함수의 정의부.
/*
방법 1: 그냥 1차원 포인터 변수로 2차원 배열에 접근하는 것.
void func(int* a1, int* a2) {
	printf("%d %d %d %d \n", a1[0], a1[1], a1[2], a1[3]);
	printf("%d %d %d %d \n", a2[0], a2[1], a2[2], a2[3]);
}
*/
// 방법 2: 배열 포인터 변수로 2차원 배열에 접근하는 것.
void func(int* a1, int(*a2)[2]) {
	printf("%d %d %d %d \n", a1[0], a1[1], a1[2], a1[3]);
	printf("%d %d %d %d \n", a2[0][0], a2[0][1], a2[1][0], a2[1][1]);
}