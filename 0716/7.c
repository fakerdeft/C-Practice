#include <stdio.h>
#include <stdlib.h>

int main() {
	//�����޸� �Ҵ� malloc, calloc, realloc
	//�����޸� �ݳ� free
	int count = 0;
	printf("������ ������ �Է��ϼ���:\n");
	scanf_s("%d", &count);

	int* parray = malloc(sizeof(int) * count);	//�����޸� �Ҵ�
	//int* parray = calloc(count, sizeof(int)); //�����޸� �Ҵ�

	for (int i = 0; i < count; i++) {
		parray[i] = i;
	}
	
	for (int i = 0; i < count; i++) {
		printf("parray[%d]=%d\n", i, parray[i]);
	}

	parray = realloc(parray, sizeof(int) * count*2); //�޸� ���Ҵ�
	printf("\n\n");
	for (int i = count; i < count*2; i++) {
		parray[i] = i;
	}
	for (int i = 0; i < count * 2; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
	}
	
	free(parray);

	return 0;
}