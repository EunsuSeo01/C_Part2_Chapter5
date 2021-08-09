/*
 Ch5 연습문제 6번 풀이. -> 반환타입이 void*여서 조금 헷갈렸다.
 last modified 2021-08-10
*/
#include <stdio.h>

// 반환 타입이 모두 void형 포인터인 함수 4개.
void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);

int main(void) {
	int a = 3;
	int b = 4;
	void* result = NULL;

	result = add(a, b);
	printf("%d add %d = %d \n", a, b, *(int*)result);
	result = subtract(a, b);
	printf("%d subtract %d = %d \n", a, b, *(int*)result);
	result = multiply(a, b);
	printf("%d multiply %d = %d \n", a, b, *(int*)result);
	result = divide(a, b);
	printf("%d divide %d = %.2lf \n", a, b, *(double*)result);

	return 0;
}

void* add(int a, int b) {
	static int sum;
	sum = a + b;
	return &sum;	// void형 포인터는 어떤 타입의 자료형의 주소든지 다 올 수 있음.
}

void* subtract(int a, int b) {
	static int sub;
	sub = a - b;
	return &sub;
}

void* multiply(int a, int b) {
	static int mul;
	mul = a * b;
	return &mul;
}

void* divide(int a, int b) {
	static double div;
	div = (double)a / b;
	return &div;
}