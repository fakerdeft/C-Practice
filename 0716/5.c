#include <stdio.h>
//c���� ���� �� �ִ� ������ ����
int global = 0; //�ܺκ���, ��������

//�Ű������� ���ú���, �ڵ�����
int SetScore(int value) {
	static int score = 0; // ���ú���, ��������

	score += value;

	return score;
}

int main() {
	int a = 20; // ���ú���(��������), �ڵ�����
	
	{
		int a = 30; // ���ú���(��������), �ڵ�����
	
		a = 100;
	}

	a = 200;

	for (int i = 0; i < 10; i++) {
		SetScore(i);
	}
	printf("score = %d\n", SetScore(0));

	return 0;
}