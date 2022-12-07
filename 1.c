#include <stdio.h>

int main() {
	int a = 20;
	float b = 3.41;

	a = b; //기본데이터 타입간에는 컴파일러가 형변환 자동으로
		   // = 묵시적 형변환

	a = (int)b; 

	b = a;

	a = a + 1;
	a += 1;

	a = a - 1;
	a -= 1;

	return 0;
}