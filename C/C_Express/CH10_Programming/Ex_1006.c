/*
1006.

다음과 같은 2차원 표를 배열로 생성하고, 각 행의 합계, 각 열의 합계를 구하여 출력하는 프로그램을 작성하라.

12 56 32 16 98
99 56 34 41  3
65  3 87 78 21

*/

#include <stdio.h>

int main(void)
{
	int arr[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};

	int r, c;
	int sum_r = 0, sum_c = 0; // 행 합계, 열 합계

	printf("각 행 합계\n");
	for (r = 0; r < 3; r++)
	{
		printf("%d행 합계 = ", r);
		for (c = 0; c < 5; c++)
			sum_r += arr[r][c];
		printf("%d \n", sum_r);
		sum_r = 0;
	}

	printf("각 열 합계\n");
	for (c = 0; c < 5; c++)
	{
		printf("%d열 합계 = ", c);
		for (r = 0; r < 3; r++)
			sum_c += arr[r][c];
		printf("%d \n", sum_c);
		sum_c = 0;
	}

}