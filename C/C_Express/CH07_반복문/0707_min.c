#include <stdio.h>
#include <limits.h>


int main(void)
{
	int number, min_value = INT_MAX; // 일단 정수의 최대값을 대입해둔다.

	printf("정수를 입력하시오\n종료는 Ctrl+z\n");

	// EOF가 입력되지 않으면 반복. 사용자가 CTRL+Z를 누르기 전까지 입력한 값들 중에서 최소값을 구한다.
	while (scanf_s("%d", &number) != EOF)
	{
		if (number < min_value)
			min_value = number;
	}
	
	printf("최소값은 %d\n", min_value);

	return 0;
}