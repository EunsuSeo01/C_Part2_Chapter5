/*
 main() 함수의 인자가 있는 경우의 예제.
 last modified 2021-08-09
*/
#include <stdio.h>
int main(int argc, char* argv[]) {
	int i = 0;
	printf("문자열의 수 : %d \n", argc);

	for (i = 0; i < argc; i++) {
		printf("%d번째 문자열 : %s \n", i, argv[i]);
	}

	return 0;
}
