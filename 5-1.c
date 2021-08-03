/*
 Call by value의 간단한 예제.
 last modified 2021-08-03
*/
#include <stdio.h>

int func(int i);

int main(void) {
	int a = 10;
	int result = 0;

	result = func(a);
	printf("%d \n", result);
	printf("%d \n", a);

	return 0;
}

int func(int i) {	// i는 지역변수(매개변수). a의 복사본. a와는 다른 메모리 공간을 가짐.
	i = i + 1;
	return i;	// result에 i값을 넘겨준 후, i의 메모리 공간은 소멸됨.
}