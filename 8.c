#include <stdio.h>

int main() {
	//����������
	int c = 20;

	c++;	//������
	//c=c+1;
	printf("c++=%d\n", c);
	++c;	//������
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