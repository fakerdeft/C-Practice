#include <stdio.h>

int main() {
	int TRUE = 1;
	int FALSE = 0;
	int ret = TRUE && FALSE;
	printf("논리 AND\n");
	printf("TRUE&&FALSE=%d\n",ret);

	ret = FALSE && TRUE;
	printf("FALSE&&TRUE=%d\n",ret);

	ret = FALSE && FALSE;
	printf("FALSE&&FALSE=%d\n", ret);

	ret = TRUE && TRUE;
	printf("TRUE&&TRUE=%d\n", ret);

	printf("\n논리 OR\n");
	ret = TRUE || TRUE;
	printf("TRUE||TRUE=%d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE||TRUE=%d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE||FALSE=%d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE||FALSE=%d\n", ret);

	printf("\n논리 NOT\n");
	ret = !TRUE;
	printf("!TRUE=%d\n", ret);

	ret = !FALSE;
	printf("!FALSE=%d\n",ret);


	return 0;
}