/*
0704.

중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여 보자.

정수를 입력하시오: 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <stdio.h>

int main(void)
{
	int i, j; // for문
	int num;  // 입력받을 정수

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", j);

		printf("\n");
	}

	return 0;
}