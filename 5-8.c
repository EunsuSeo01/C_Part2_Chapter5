/*
 ���� ������ ��ȯ�� �� ����� ������ Ȯ���ϱ� ���� ����.
 last modified 2021-08-09
*/
#include <stdio.h>
int* func();
int main(void) {
	int* p = NULL;
	p = func();

	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));

	return 0;
}

int* func() {
	int array[] = { 10, 20, 30, 40 };
	return array;	// �迭 array�� ���� �����ε�, ���� ������ �Լ��� ����Ǹ� �޸� ������ �Ҹ�ȴ�.
					// �Լ��� �� ���� ������ ���� ��ȯ�߱� ������ ������ �߻�.
}