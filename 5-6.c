/*
 �ּҸ� ��ȯ�ϴ� �Լ��� ���� �� ���� ������ �ּҸ� ��ȯ�ϸ� ��� �߻��ϴµ�, �װ��� ����.
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
	int num1;	// num1�� ���� ����.
	scanf("%d", &num1);
	return &num1;
}