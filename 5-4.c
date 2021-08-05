/*
 배열 포인터 변수 p를 사용하여 2차원 배열의 값에 접근하는 예제.
 last modified 2021-08-05
*/
#include <stdio.h>
void func(int(*p)[4], int n1, int n2);
int main(void) {
	// 2차원 배열 선언.
	int array[2][4] = { 10,20,30,40,50,60,70,80 };
	func(array, sizeof(array) / 16, sizeof(array) / 8);

	return 0;
}
// p는 길이가 4열인 2차원 배열의 주소를 저장하는 포인터 변수.
void func(int(*p)[4], int num1, int num2) {
	int i, j;
	for (i = 0; i < num1; i++) {
		for (j = 0; j < num2; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}