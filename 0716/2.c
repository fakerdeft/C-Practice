#include <stdio.h>

//struct ����ü:���� ������ ������ �ϳ��� ��� ���ο� ������Ÿ��
typedef struct tagStudent { //����ü ������ Ÿ�� ����
	int classNum;
	float grade;
	int sex;
}Student;


int main() {
	//�л� ������ ���α׷�
	//�̸�,�г�,����,����
	/*
	int classNum;
	float grade;
	int sex;

	int classNumArray[100];
	float gradeArray[100];
	int sexArray[100];

	for (int i = 0; i < 100; i++) {
		//�л������� �а�
		classNumArray[i] = i;
		gradeArray[i] = i;
		sexArray[i] = i;
	}

	Student a;
	a.classNum = 1;
	a.grade = 2;
	a.sex = 0;

	printf("�г�: %d, ����: %f, ����: %d", a.classNum, a.grade, a.sex);
	*/

	
	Student st;

	Student* pst = &st;

	// �ּҰ��� ������ ����ü ����� ����: -> ȭ��ǥ�����ڸ� ���
	pst->classNum = 1;   
	pst->grade = 100;
	pst->sex = 0;

	printf("�г�: %d, ����: %f, ����: %d\n", 
		pst->classNum, pst->grade, pst->sex);


	Student array[5]; //����ü �迭

	for (int i = 0; i <3; i++) {
		printf("�л������͸� �Է��ϼ���.(�г� ���� ����):");
		scanf_s("%d %f %d", 
			&array[i].classNum,&array[i].grade,&array[i].sex);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �л� �г�:%d, ����:%f, ����:%d\n",i+1,
			array[i].classNum,array[i].grade,array[i].sex);
	}

	return 0;
}
