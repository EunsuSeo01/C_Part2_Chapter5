/*
 static 키워드를 붙여 줌으로써, 지역 변수를 반환했을 때의 오류를 해결한 예제.
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
	static int array[] = { 10, 20, 30, 40 };
	return array;
}