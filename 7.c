#include <stdio.h>

int main() {
	//���� ������ ? :
	int a = 20, b = 30;

	(a > b) ? printf("a:%d�� b:%d���� ũ��.\n", a, b) : printf("a:%d�� b:%d���� �۰ų� ����.\n", a, b);
	int max = (a > b) ? a : b;
	printf("max=%d\n", max);


	return 0;
}