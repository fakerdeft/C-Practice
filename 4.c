#include <stdio.h>

int main() {
	//��ȣ������
	/*int a = 20;
	a = -a; 
	printf("a=%d\n", a);
	*/

	//���迬����
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