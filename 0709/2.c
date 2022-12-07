#include <stdio.h>

int main() {
	//비트연산자
	/*char a = 2, b = 1;
	char ret = a & b;
	printf("ret=%d\n", ret);
	
	ret = a | b;
	printf("a|b=%d\n", ret);
	
	ret = ~a;
	printf("~a=%d\n", ret);
	
	ret = a ^ b;
	printf("a^b=%d\n", ret); */


	/*int a = 3, b = 2;

	a = a ^ b;
	// 0000 0011(a)
	// 0000 0010(b)
	// 0000 0001(a^b)
	printf("a^b=%d\n", a);

	a = a ^ b;
	// 0000 0001 (a)
	// 0000 0010 (b)
	 // 0000 0011 (a ^ b)
	printf("a^b=%d\n", a); */


	int a = 1;
	//0000 0001
	printf("a=%d\n", a);
	a = a << 1;
	//0000 0010
	printf("a=%d\n", a);

	a = a << 2;
	printf("a=%d\n", a);

	a = a >> 1;
	printf("a=%d\n", a);
	a = a >> 2;
	printf("a=%d\n", a);

	return 0;
}