/*
 Ch5 연습문제 1번 풀이.
 last modified 2021-08-09
*/
#include <stdio.h>
void func(char c, char* str, int n1, double n2);	// 1: 함수의 선언부.
int main(void) {
	char c = 'A';
	char* str = "ABCD";
	int num1 = 10;
	double num2 = 3.14;

	func(c, str, num1, num2);
	return 0;
}
// 2: 함수의 정의부.
void func(char c, char* str, int n1, double n2) {
	printf("%c %s %d %.2lf \n", c, str, n1, n2);
}