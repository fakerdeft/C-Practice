#include <stdio.h>

int main() {
	//0~100���� ���ڸ� �����ϼ���
	//������ ������ Ÿ���� ������ ������ �ʿ��Ҷ�
	//���� ���ִ� ���->�迭

	int array[101];
	
	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}
	
	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d]=%d\n", i, array[i]);
		}
	}


	return 0;
}