// 중첩 for문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#include <stdio.h>

int main(void)
{
	int x, y;

	// 외부 반복문(5번 반복)
	for (y = 0; y < 5; y++)
	{
		// 내부 반복문(10번 반복)
		for (x = 0; x < 10; x++)
			printf("*");

		printf("\n"); // 내부 반복문이 종료될 때마가 실행
	}

	return 0;
}