#include <stdio.h>

int main() {
	int a;
	a = 20;
	
	printf("&a=%p\n", &a);

	int* pa; // 포인터 형지정자
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa; //주솟값 앞에 사용하는 *는 포인터 연산자
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
