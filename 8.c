#include <stdio.h>

int main() {
	//증감연산자
	int c = 20;

	c++;	//후위식
	//c=c+1;
	printf("c++=%d\n", c);
	++c;	//전위식
	//c=c+1;
	printf("++c=%d\n", c);

	int d = c++;
	//d=c;
	//c=c+1;
	printf("d=%d,c=%d\n", d, c);

	d = ++c;
	//c=c+1;
	//d=c;
	printf("d=%d,c=%d\n", d, c);

	return 0;
}