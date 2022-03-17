/* 실습. 직각 삼각형 찾기 */
#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 100; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			for (c = 1; c <= 100; c++)
			{
				if ((a*a + b * b) == c * c) // 피타고라스 정리를 만족하는 삼각형이면
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	
	return 0;
}