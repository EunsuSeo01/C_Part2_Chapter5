/*
 argc�� �̿��ؼ� ���ڿ��� ���� 4�� �ʰ��ϸ� ���α׷��� �����ϴ� ����.
 last modified 2021-08-09
*/
#include <stdio.h>
// int argc -> ���� ���(1��) + ���ڿ��� ����.
// char* argv[] -> "������ �迭!" �� ��ҿ� ���ڿ� �迭�� ���� �ּҰ� ��� ����.
int main(int argc, char* argv[]) {
	int i = 0;
	if (argc > 4)
	{
		printf("���ڿ��� ���� �ʹ� �����ϴ�. \n");
		printf("���α׷��� �����մϴ�. \n");

		return 1;	// �ü������ 1�� ��ȯ �� ���α׷� ����(= main() �Լ� ����)
	}

	printf("0��° ���ڿ� : %s \n", argv[0]);
	printf("1��° ���ڿ� : %s \n", argv[1]);
	printf("2��° ���ڿ� : %s \n", argv[2]);
	printf("3��° ���ڿ� : %s \n", argv[3]);

	return 0;
}