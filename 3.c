#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL)); // ���� �õ尪 ����

	int a = 13;
	int b = 2;
	int ret = a % b;

	printf("%d %% %d = %d\n", a, b, ret);
	// ������ �����ڴ� Ư���� �뵵�� ���
	// ������ ���� ������ ���� ���ڷ� ���鶧 ���
	// rand() ���� �߻��ϴ� �Լ�
	int randvalue = rand(); // ���� ����

	int direct = randvalue % 4; // 0:�� 1:�� 2:�� 3:��

	switch (direct) {
	case 0:
		printf("�������� �̵�\n");
		break;

	case 1:
		printf("�������� �̵�\n");
		break;

	case 2:
		printf("�������� �̵�\n");
		break;

	case 3:
		printf("�������� �̵�\n");
		break;
	}
	return 0;
}