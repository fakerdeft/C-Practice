#include <stdio.h>

int main() {
	float x = 0, y = 0;
	printf("(x,y)���� �Է��ϼ���(x,y:0~10):");
	scanf_s("%f,%f",&x,&y);

	//sol 1
	/*
	int ret = (0 < x && x < 10) && (0 < y && y < 10);
	printf("(%.1f,%.1f)�� ���� �ȿ� %d (�����Ѵ�=1, �������� �ʴ´�=0).\n", x, y,ret);
	*/

	//sol 2
	/*
	((0 < x && x < 10) && (0 < y && y < 10) > 0) ? printf("(%.1f,%.1f)�� ���� �ȿ� �����Ѵ�.\n",x,y)
		: printf("(%.1f,%.1f)�� ���� �ȿ� �������� �ʴ´�.\n",x,y);
	*/

	return 0;
}