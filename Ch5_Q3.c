/*
 Ch5 연습문제 3번 풀이.
 last modified 2021-08-09
*/
#include <stdio.h>
#define SIZE 8
void print(int* arr);
void move(int* arr);
int main(void) {
	int array[] = { 1,2,3,4,5,6,7,8 };	// 배열 선언.

	printf("실행 전 : ");
	print(array);

	move(array);

	printf("실행 후 : ");
	print(array);

	return 0;
}
void print(int* arr) {
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void move(int* arr) {
	int tmp = arr[SIZE - 1];	// 맨 마지막 인덱스의 값을 다른 곳에 임시 저장.
	for (int i = SIZE - 2; i >= 0; i--){
		arr[i + 1] = arr[i];	// 배열의 뒷쪽 인덱스의 요소부터 차례차례 옮긴다.
	}
	arr[0] = tmp;	// 임시 저장해 둔 값을 맨 앞 인덱스로 이동.
}