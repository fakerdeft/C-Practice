#include <stdio.h>

int main() {
	/*int a = 20;
	//if(���ǽ�)
	if (a > 20) {//���� ���ǹ�
		printf("a:%d�� 20���� ũ��\n");

	}

	if (a < 20) {//���� ���ǹ�
		printf("a:%d�� 20���� �۴�\n");
	}
	else{
		printf("a:%d�� 20���� ũ�ų� ����\n");
	}*/
	
	/*int money = 0;
	printf("�뵷�� �Է��ϼ���:");
	scanf_s("%d", &money);
	
	if (money <= 60000 && money > 20000) {
		printf("�߱���\n");
	}
	else if (money > 100000) { // ���� ���ǹ�
		printf("��ȭ\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("������\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("�뷡��\n");
	}
	else {   // ��������
		printf("����");
	}*/

	//�������� ��ȭ�� ���� �б� ó���� �� ��쿡��
	//switch case�� ����ϴ°� ����
	/*int buttonNum = 0;
	printf("������ ��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &buttonNum);

	switch (buttonNum) {
	case 0:
		printf("TV ��\n");
		break;

	case 1:
		printf("TV ��\n");
		break;
	
	case 2:
		printf("���� �÷�\n");
		break;

	case 3:
		printf("���� ����\n");
		break;

	default:
		printf("Wrong Number\n");
		break;
	}
	*/

	/*
	int num = 0;
START: //���̺�

	printf("�������� �Է��ϼ���(-1�� ����):");
	scanf_s("%d", &num);

	if (num == -1) {
		goto EXIT; //����� �б�
	}

	printf("�ٽ�\n");

	goto START; //����� �б�(�� �� ������ ���x)

EXIT:
	printf("����\n"); */


	//�ݺ�Ƚ�� �ƴ� ��� ����ϱ� ����
	for (int i = 0; i < 10; i++) {
		printf("i=%d\n", i);
	}

	for (int i = 0; j = 10; i < 10 && j>0; i++, j--) {
		printf("i=%d,j=%d\n", i, j);
	}

	/*
	for(;;){
	printf("���ѷ���\n");
	}
	*/
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i=%d,j=%d\n", i, j);
		}
	}
	
	//�ݺ�Ƚ�� �𸣴� ���
	float a = 123123.123123;
	while (a > 0){
		a -= 123.1231f;
	}

	a = 123123.12312312;
	do {
		a -= 123.1231f;
	} while (a > 0);


	return 0;
}