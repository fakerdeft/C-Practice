#include <stdio.h>

int main() {
	float x = 0, y = 0;
	printf("(x,y)값을 입력하세요(x,y:0~10):");
	scanf_s("%f,%f",&x,&y);

	//sol 1
	/*
	int ret = (0 < x && x < 10) && (0 < y && y < 10);
	printf("(%.1f,%.1f)는 상자 안에 %d (존재한다=1, 존재하지 않는다=0).\n", x, y,ret);
	*/

	//sol 2
	/*
	((0 < x && x < 10) && (0 < y && y < 10) > 0) ? printf("(%.1f,%.1f)는 상자 안에 존재한다.\n",x,y)
		: printf("(%.1f,%.1f)는 상자 안에 존재하지 않는다.\n",x,y);
	*/

	return 0;
}
