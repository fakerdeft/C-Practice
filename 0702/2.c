#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int ret = a / b;
	printf("%d/%d=%d\n", a, b, ret);

	float fret = a / b;
	printf("%d/%d=%f\n", a, b, fret);

	//(float)Çüº¯È¯ ¿¬»êÀÚ
	fret = a / (float)b;
	printf("%d/%d=%f\n", a, b, fret);
	

	return 0;
}
