#include <stdio.h>
int global = 0;

int* SetScore(int value) {
	int score = 0; // �ڵ������� �ּڰ��� �Լ��ܺη� �����ؼ� ����ϸ� �ȵ�
	score += value;
	return &score;
}
int* pSetScore(int value) {
	static int score = 0; //���������� �ּڰ��� �ܺη� �����ؼ� ����ص���
	score += value;		  //���������� ���α׷��� ����Ǳ� ������ ����������
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