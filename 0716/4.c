#include <stdio.h>

void Swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void Pswap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main() {
	int a = 20;
	int b = 30;

	Swap(a, b); // call by value

	printf("a = %d, b = %d\n", a, b);

	Pswap(&a, &b);   // call by address
	printf("a = %d, b = %d\n", a, b);

	return 0;
}