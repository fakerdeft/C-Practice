#define _CRT_SECURE_NO_WARNINGS // 보안 에러 내지 말고 요청
#include <stdio.h>

int main() {
	int x = 0;
	printf("x의 값을 입력하세요(정수값):");
	scanf("%d", &x);

	int ret = (0 < x) && (x < 10);
	printf("x:%d는 0과 10사이에서 %d (참:1, 거짓:0)\n", x, ret);

	return 0;
}

/*숙제
사각박스안에 점(x,y)이 들어가있는지 판단하는 프로그램


*/