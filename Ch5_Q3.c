/*
 Ch5 �������� 3�� Ǯ��.
 last modified 2021-08-09
*/
#include <stdio.h>
#define SIZE 8
void print(int* arr);
void move(int* arr);
int main(void) {
	int array[] = { 1,2,3,4,5,6,7,8 };	// �迭 ����.

	printf("���� �� : ");
	print(array);

	move(array);

	printf("���� �� : ");
	print(array);

	return 0;
}
void print(int* arr) {
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void move(int* arr) {
	int tmp = arr[SIZE - 1];	// �� ������ �ε����� ���� �ٸ� ���� �ӽ� ����.
	for (int i = SIZE - 2; i >= 0; i--){
		arr[i + 1] = arr[i];	// �迭�� ���� �ε����� ��Һ��� �������� �ű��.
	}
	arr[0] = tmp;	// �ӽ� ������ �� ���� �� �� �ε����� �̵�.
}