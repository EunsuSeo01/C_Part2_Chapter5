/*
 main() �Լ��� ���ڰ� �ִ� ����� ����.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(int argc, char* argv[]) {
	int i = 0;
	printf("���ڿ��� �� : %d \n", argc);

	for (i = 0; i < argc; i++) {
		printf("%d��° ���ڿ� : %s \n", i, argv[i]);
	}

	return 0;
}