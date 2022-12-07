#include <stdio.h>


int main() {

	
	int array[101];

	for (int i = 0; i <= 100; i++) {
		array[i] = i;
	}
	for (int i = 0; i <= 100; i++) {
		printf("array[%d]=%d\n", i, array[i]);
	}

	for(int i=0; i<=100; i++) {
		if (array[i] % 2 == 0) {
			//Â¦¼ö¸¸ Ãâ·Â
			printf("array[%d]=%d\n", i, array[i]);
		}
	}
	

	printf("\n\n Æ÷ÀÎÅÍ½Ä\n");
	int* parray = array;

	for (int i = 0; i <= 100; i++) {
		*(parray + i) = i;
	}

	for (int i = 0; i <= 100; i++) {
		printf("*(parray+%d)=%d\n", i, *(parray + i));
	}

	return 0;
}
