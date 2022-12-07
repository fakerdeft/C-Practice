#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL)); // 랜덤 시드값 생성

	int a = 13;
	int b = 2;
	int ret = a % b;

	printf("%d %% %d = %d\n", a, b, ret);
	// 나머지 연산자는 특별한 용도로 사용
	// 임의의 수를 일정한 범위 숫자로 만들때 사용
	// rand() 난수 발생하는 함수
	int randvalue = rand(); // 난수 생성

	int direct = randvalue % 4; // 0:북 1:남 2:서 3:동

	switch (direct) {
	case 0:
		printf("북쪽으로 이동\n");
		break;

	case 1:
		printf("남쪽으로 이동\n");
		break;

	case 2:
		printf("서쪽으로 이동\n");
		break;

	case 3:
		printf("동쪽으로 이동\n");
		break;
	}
	return 0;
}