#include <stdio.h>

int main() {
	//0~100까지 숫자를 저장하세요
	//동일한 데이터 타입의 공간이 여러개 필요할때
	//쉽게 해주는 기능->배열

	int array[101];
	
	for (int i = 0; i < 101; i++) {
		array[i] = i;
	}
	
	for (int i = 0; i < 101; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d]=%d\n", i, array[i]);
		}
	}


	return 0;
}