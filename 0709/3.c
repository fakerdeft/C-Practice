#include <stdio.h>

int main() {
	/*int a = 20;
	//if(조건식)
	if (a > 20) {//단일 조건문
		printf("a:%d는 20보다 크다\n");

	}

	if (a < 20) {//이중 조건문
		printf("a:%d는 20보다 작다\n");
	}
	else{
		printf("a:%d는 20보다 크거나 같다\n");
	}*/
	
	/*int money = 0;
	printf("용돈을 입력하세요:");
	scanf_s("%d", &money);
	
	if (money <= 60000 && money > 20000) {
		printf("중국집\n");
	}
	else if (money > 100000) { // 다중 조건문
		printf("영화\n");
	}
	else if (money <= 100000 && money > 80000) {
		printf("볼링장\n");
	}
	else if (money <= 80000 && money > 60000) {
		printf("노래방\n");
	}
	else {   // 생략가능
		printf("낮잠");
	}*/

	//정수값의 변화에 따라서 분기 처리를 할 경우에는
	//switch case문 사용하는게 유리
	/*int buttonNum = 0;
	printf("리모컨 번호를 입력하세요:");
	scanf_s("%d", &buttonNum);

	switch (buttonNum) {
	case 0:
		printf("TV 꺼\n");
		break;

	case 1:
		printf("TV 켜\n");
		break;
	
	case 2:
		printf("볼륨 올려\n");
		break;

	case 3:
		printf("볼륨 내려\n");
		break;

	default:
		printf("Wrong Number\n");
		break;
	}
	*/

	/*
	int num = 0;
START: //레이블

	printf("정수값을 입력하세요(-1은 종료):");
	scanf_s("%d", &num);

	if (num == -1) {
		goto EXIT; //하향식 분기
	}

	printf("다시\n");

	goto START; //상향식 분기(될 수 있으면 사용x)

EXIT:
	printf("종료\n"); */


	//반복횟수 아는 경우 사용하기 좋음
	for (int i = 0; i < 10; i++) {
		printf("i=%d\n", i);
	}

	for (int i = 0; j = 10; i < 10 && j>0; i++, j--) {
		printf("i=%d,j=%d\n", i, j);
	}

	/*
	for(;;){
	printf("무한루프\n");
	}
	*/
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i=%d,j=%d\n", i, j);
		}
	}
	
	//반복횟수 모르는 경우
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