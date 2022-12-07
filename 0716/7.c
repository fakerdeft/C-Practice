#include <stdio.h>
#include <stdlib.h>

int main() {
	//동적메모리 할당 malloc, calloc, realloc
	//동적메모리 반납 free
	int count = 0;
	printf("정수의 갯수를 입력하세요:\n");
	scanf_s("%d", &count);

	int* parray = malloc(sizeof(int) * count);	//동적메모리 할당
	//int* parray = calloc(count, sizeof(int)); //동적메모리 할당

	for (int i = 0; i < count; i++) {
		parray[i] = i;
	}
	
	for (int i = 0; i < count; i++) {
		printf("parray[%d]=%d\n", i, parray[i]);
	}

	parray = realloc(parray, sizeof(int) * count*2); //메모리 재할당
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