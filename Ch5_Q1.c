/*
 Ch5 �������� 1�� Ǯ��.
 last modified 2021-08-09
*/
#include <stdio.h>
void func(char c, char* str, int n1, double n2);	// 1: �Լ��� �����.
int main(void) {
	char c = 'A';
	char* str = "ABCD";
	int num1 = 10;
	double num2 = 3.14;

	func(c, str, num1, num2);
	return 0;
}
// 2: �Լ��� ���Ǻ�.
void func(char c, char* str, int n1, double n2) {
	printf("%c %s %d %.2lf \n", c, str, n1, n2);
}