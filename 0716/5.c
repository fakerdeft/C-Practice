#include <stdio.h>
//c언어에서 만들 수 있는 변수의 종류
int global = 0; //외부변수, 전역변수

//매개변수는 로컬변수, 자동변수
int SetScore(int value) {
	static int score = 0; // 로컬변수, 정적변수

	score += value;

	return score;
}

int main() {
	int a = 20; // 로컬변수(지역변수), 자동변수
	
	{
		int a = 30; // 로컬변수(지역변수), 자동변수
	
		a = 100;
	}

	a = 200;

	for (int i = 0; i < 10; i++) {
		SetScore(i);
	}
	printf("score = %d\n", SetScore(0));

	return 0;
}