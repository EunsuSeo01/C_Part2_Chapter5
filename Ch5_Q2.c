/*
 Ch5 �������� 2�� Ǯ��.
 last modified 2021-08-09
*/
#include <stdio.h>
// 1: �Լ��� �����.
void func(int* a1, int(*a2)[2]);
int main(void) {
	int array1[4] = { 10,20,30,40 };	// 1���� �迭.
	int array2[2][2] = { 50,60,70,80 };	// 2���� �迭.

	func(array1, array2);
	return 0;
}
// 2: �Լ��� ���Ǻ�.
/*
��� 1: �׳� 1���� ������ ������ 2���� �迭�� �����ϴ� ��.
void func(int* a1, int* a2) {
	printf("%d %d %d %d \n", a1[0], a1[1], a1[2], a1[3]);
	printf("%d %d %d %d \n", a2[0], a2[1], a2[2], a2[3]);
}
*/
// ��� 2: �迭 ������ ������ 2���� �迭�� �����ϴ� ��.
void func(int* a1, int(*a2)[2]) {
	printf("%d %d %d %d \n", a1[0], a1[1], a1[2], a1[3]);
	printf("%d %d %d %d \n", a2[0][0], a2[0][1], a2[1][0], a2[1][1]);
}