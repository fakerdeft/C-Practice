#include <stdio.h>

int main() {
	//şÎČŁżŹťęŔÚ
	/*int a = 20;
	a = -a; 
	printf("a=%d\n", a);
	*/

	//°ü°čżŹťęŔÚ
	int a = 20;
	int b = 30;
	int ret = a < b;
	printf("%d<%d=%d\n", a, b, ret);

	ret = a > b;
	printf("%d>%d=%d\n", a, b, ret);

	ret = a <= b;
	printf("%d<=%d=%d\n", a, b, ret);

	ret = a >= b;
	printf("%d>=%d=%d\n", a, b, ret);

	ret = a == b;
	printf("%d==%d=%d\n", a, b, ret);

	ret = a != b;
	printf("%d!=%d=%d\n", a, b, ret);

	return 0;
}
