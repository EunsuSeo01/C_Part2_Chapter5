/*
 ����(Static) ������ �Լ��� ����� �Ŀ��� �޸� ������ �Ҹ���� �ʰ� ���� �ִ�.
 ���� ������ ����ϸ� ���� ������ �ּҸ� ��ȯ�ؼ� ����� ������ �ذ��� �� �ִ�.
 �ּ� ��ȯ �� ������ ���� ���� ����� ����.
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
	static int num1;	// num1�� ���� ������ ����.
	scanf("%d", &num1);

	return &num1;		// ��ȯ Ÿ���� int*�̱� ������ num1�� �ּҰ�(&num1)�� ��ȯ�Ѵ�.
}