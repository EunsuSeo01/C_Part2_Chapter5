/*
 지역 변수를 반환할 때 생기는 오류를 확인하기 위한 예제.
 last modified 2021-08-09
*/
#include <stdio.h>
int* func();
int main(void) {
	int* p = NULL;
	p = func();

	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));

	return 0;
}

int* func() {
	int array[] = { 10, 20, 30, 40 };
	return array;	// 배열 array가 지역 변수인데, 지역 변수는 함수가 종료되면 메모리 공간이 소멸된다.
					// 함수가 이 지역 변수의 값을 반환했기 때문에 오류가 발생.
}