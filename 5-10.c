/*
 static 키워드 사용 예제.
 last modified 2021-08-09
*/
#include <stdio.h>

// 함수의 선언.
char* string1(void);
char* string2(void);

int main(void) {
	char* p1 = NULL;
	char* p2 = NULL;

	p1 = string1();		// 함수의 호출.
	p2 = string2();

	printf("%s \n", p1);
	printf("%s \n", p2);

	return 0;
}

// 함수의 정의.
char* string1(void) {
	static char str[] = "Good";		// 정적 변수로 선언했으니 함수 종료 후에도 사용 가능!
	return str;		// 배열의 시작 주소, 즉 문자 G를 가리키는 주소를 반환함.
}

char* string2(void) {
	static char str[] = "morning";
	return str;		// 배열의 시작 주소, 즉 문자 m을 가리키는 주소를 반환함.
}
