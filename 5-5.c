/*
 배열 포인터 변수를 사용하지 않고, 1차원 포인터 변수에 2차원 배열의 주소를 저장하여 접근하는 예제.
 last modified 2021-08-05
*/
#include <stdio.h>
void func(int* p);
int main(void) {
	int array[2][4] = { 10,20,30,40,50,60,70,80 };
	func(array);

	return 0;
}
void func(int* p) {
	printf("%d %d %d %d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);

	// printf("%d %d %d %d \n", p[0][0], p[0][1], p[0][2], p[0][3]);  -> ERROR
	// printf("%d %d %d %d \n", p[1][0], p[1][1], p[1][2], p[1][3]);  -> ERROR
	// p를 통해 2차원 배열을 '1차원 배열처럼 접근'하는 것은 가능하지만, (실제 메모리상에는 2차원 배열도 일렬로 저장되어 있음)
	// p는 1차원 포인터 변수이기 때문에 2차원 배열처럼 값을 출력할 수는 없다.
}