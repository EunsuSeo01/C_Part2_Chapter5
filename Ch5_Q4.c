/*
 Ch5 연습문제 4번 풀이.
 last modified 2021-08-10
*/
#include <stdio.h>

void swap(int* a, int* b);

int main(void) {
	int i = 10, j = 20;

	printf("main(): i = %d, j = %d \n", i, j);
	swap(&i, &j);
	printf("main(): i = %d, j = %d \n", i, j);

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}