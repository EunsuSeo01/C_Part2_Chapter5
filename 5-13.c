/*
 argc를 이용해서 문자열의 수가 4를 초과하면 프로그램을 종료하는 예제.
 last modified 2021-08-09
*/
#include <stdio.h>
// int argc -> 실행 경로(1개) + 문자열의 개수.
// char* argv[] -> "포인터 배열!" 각 요소에 문자열 배열의 시작 주소가 담겨 있음.
int main(int argc, char* argv[]) {
	int i = 0;
	if (argc > 4)
	{
		printf("문자열의 수가 너무 많습니다. \n");
		printf("프로그램을 종료합니다. \n");

		return 1;	// 운영체제에게 1을 반환 후 프로그램 종료(= main() 함수 종료)
	}

	printf("0번째 문자열 : %s \n", argv[0]);
	printf("1번째 문자열 : %s \n", argv[1]);
	printf("2번째 문자열 : %s \n", argv[2]);
	printf("3번째 문자열 : %s \n", argv[3]);

	return 0;
}