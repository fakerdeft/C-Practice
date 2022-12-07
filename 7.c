#include <stdio.h>

int main() {
	//조건 연산자 ? :
	int a = 20, b = 30;

	(a > b) ? printf("a:%d가 b:%d보다 크다.\n", a, b) : printf("a:%d가 b:%d보다 작거나 같다.\n", a, b);
	int max = (a > b) ? a : b;
	printf("max=%d\n", max);


	return 0;
}