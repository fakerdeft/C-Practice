#include <stdio.h>

//struct 구조체:서로 연관덴 데이터 하나로 묶어서 새로운 데이터타입
typedef struct tagStudent { //구조체 데이터 타입 만듦
	int classNum;
	float grade;
	int sex;
}Student;


int main() {
	//학생 관리용 프로그램
	//이름,학년,성별,성적
	/*
	int classNum;
	float grade;
	int sex;

	int classNumArray[100];
	float gradeArray[100];
	int sexArray[100];

	for (int i = 0; i < 100; i++) {
		//학생데이터 읽고
		classNumArray[i] = i;
		gradeArray[i] = i;
		sexArray[i] = i;
	}

	Student a;
	a.classNum = 1;
	a.grade = 2;
	a.sex = 0;

	printf("학년: %d, 성적: %f, 성별: %d", a.classNum, a.grade, a.sex);
	*/

	
	Student st;

	Student* pst = &st;

	// 주소값을 가지고 구조체 멤버에 접근: -> 화살표연산자를 사용
	pst->classNum = 1;   
	pst->grade = 100;
	pst->sex = 0;

	printf("학년: %d, 성적: %f, 성별: %d\n", 
		pst->classNum, pst->grade, pst->sex);


	Student array[5]; //구조체 배열

	for (int i = 0; i <3; i++) {
		printf("학생데이터를 입력하세요.(학년 성적 성별):");
		scanf_s("%d %f %d", 
			&array[i].classNum,&array[i].grade,&array[i].sex);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생 학년:%d, 성적:%f, 성별:%d\n",i+1,
			array[i].classNum,array[i].grade,array[i].sex);
	}

	return 0;
}
