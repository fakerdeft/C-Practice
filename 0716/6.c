#include <stdio.h>
int global = 0;

int* SetScore(int value) {
	int score = 0; // 자동변수의 주솟값을 함수외부로 전달해서 사용하면 안됨
	score += value;
	return &score;
}
int* pSetScore(int value) {
	static int score = 0; //정적변수의 주솟값은 외부로 전달해서 사용해도됨
	score += value;		  //정적변수는 프로그램이 종료되기 전까지 공간유지됨
	return &score;
}
int SetValue(int* pa) {

	
}

int main() {
	int a;

	int* pa = SetScore(1000);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	for (int i = 0; i < 100; i++) {
		pSetScore(i);
	}
	int* pscore = pSetScore(0);
	printf("*pscore = %d\n", *pscore);
	printf("*pa = %d\n", *pa);

	return 0;
}