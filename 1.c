#include <stdio.h>

int main() {
	int a = 20;
	float b = 3.41;

	a = b; //�⺻������ Ÿ�԰����� �����Ϸ��� ����ȯ �ڵ�����
		   // = ������ ����ȯ

	a = (int)b; 

	b = a;

	a = a + 1;
	a += 1;

	a = a - 1;
	a -= 1;

	return 0;
}