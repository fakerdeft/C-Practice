#define _CRT_SECURE_NO_WARNINGS // ���� ���� ���� ���� ��û
#include <stdio.h>

int main() {
	int x = 0;
	printf("x�� ���� �Է��ϼ���(������):");
	scanf("%d", &x);

	int ret = (0 < x) && (x < 10);
	printf("x:%d�� 0�� 10���̿��� %d (��:1, ����:0)\n", x, ret);

	return 0;
}

/*����
�簢�ڽ��ȿ� ��(x,y)�� ���ִ��� �Ǵ��ϴ� ���α׷�


*/