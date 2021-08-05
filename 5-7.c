/*
 정적(Static) 변수는 함수가 종료된 후에도 메모리 공간이 소멸되지 않고 남아 있다.
 정적 변수를 사용하면 지역 변수의 주소를 반환해서 생기는 문제를 해결할 수 있다.
 주소 반환 시 유용한 정적 변수 사용의 예제.
 last modified 2021-08-05
*/
#include <stdio.h>
int* input();

int main(void) {
	int* p = NULL;

	p = input();
	printf("%d \n", *p);

	return 0;
}

int* input() {
	static int num1;	// num1을 정적 변수로 선언.
	scanf("%d", &num1);

	return &num1;		// 반환 타입이 int*이기 때문에 num1의 주소값(&num1)을 반환한다.
}