#include <stdio.h>



void PrintMonster() {//재사용성, 가독성, 모듈성
	printf("monster\n");
	printf("monster\n");
}

int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
int sub(int a, int b) {
	int temp;
	temp = a - b;
	return temp;
}
int mul(int a, int b) {
	int temp;
	temp = a * b;
	return temp;
}
float div(int a, int b) {
	float temp;
	temp = a / (float)b;
	return temp;
}
int main() {
	PrintMonster();
	int a = 20, b = 30;
	int ret = add(a, b);
	printf("%d+%d = %d\n", a, b, ret);
	ret = sub(a, b);
	printf("%d-%d = %d\n", a, b, ret);
	ret = mul(a, b);
	printf("%d*%d = %d\n", a, b, ret);
	float fret = div(a, b);
	printf("%d/%d = %f\n", a, b,fret);

	return 0;
}