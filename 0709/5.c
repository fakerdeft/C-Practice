#include <stdio.h>

int main() {
	int a;
	a = 20;
	
	printf("&a=%p\n", &a);

	int* pa; // ������ ��������
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; //�ּڰ� �տ� ����ϴ� *�� ������ ������
	**&pa;
	*pa;
	*&a;
	a;

	**ppa = 2000;
	*pa = 5000;

	printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n", &**ppa, &**&pa, &*pa, &*&a, &a);
	printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n", **ppa, **&pa, *pa, *&a, a);

	return 0;
}
