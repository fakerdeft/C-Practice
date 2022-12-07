#include <stdio.h> //헤더파일

int main() {    //메인함수
	// 형식지정문자열
	/*int a = 123;

	printf("a=%d\n", a); // 정수전체
	printf("a=%u\n", a); // 0,양의 정수

	float b = 1.234f;
	printf("b=%f\n", b); // 실수 출력

	double d = 2.45;
	printf("d=%lf\n", d);
	
	char c = 65;
	printf("c=%c\n", c); // 문자 출력
	
	*/
	short a= -32767;
	printf("a=%d\n", a);
	long b= 12345678;
	printf("b=%d\n", b);
	int c = -12345678;
	printf("c=%d\n", c);
	unsigned short d = 32760;
	printf("d=%d\n", d);
	unsigned long e = 1234512345;
	printf("e=%d\n", e);
	unsigned int f = 123123123;
	printf("f=%d\n", f);
	float g = -1.23456;
	printf("g=%f\n", g);
	double h = -1.23456789;
	printf("h=%lf\n", h); 
	char i=126;
	printf("i=%c\n", i);
	unsigned char j = 1; 
	printf("j=%c\n", j);

	unsigned char k = -1;
	printf("k=%d\n", k);
	
	char t = 255;
	printf("t=%d\n", t);

	return 0;
}