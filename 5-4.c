/*
 �迭 ������ ���� p�� ����Ͽ� 2���� �迭�� ���� �����ϴ� ����.
 last modified 2021-08-05
*/
#include <stdio.h>
void func(int(*p)[4], int n1, int n2);
int main(void) {
	// 2���� �迭 ����.
	int array[2][4] = { 10,20,30,40,50,60,70,80 };
	func(array, sizeof(array) / 16, sizeof(array) / 8);

	return 0;
}
// p�� ���̰� 4���� 2���� �迭�� �ּҸ� �����ϴ� ������ ����.
void func(int(*p)[4], int num1, int num2) {
	int i, j;
	for (i = 0; i < num1; i++) {
		for (j = 0; j < num2; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}