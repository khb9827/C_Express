/*
0708.

컴퓨터는 막대 그래프를 그리는 데도 사용된다.
사용자로부터 1부터 50 사이의 숫자를 입력받아서 숫자만큼의 별표를 출력하는 프로그램을 작성하라.
막대는 세로로 그려지게 된다.

*/

#include <stdio.h>

int main(void)
{
	int num; // 입력받을 높이
	int i, j; // for문
	do
	{
		printf("막대의 높이(종료: -1): ");
		scanf_s("%d", &num);
		
		if (num >= 1 && num <= 50) // 1~50 사이 범위만 출력하도록 설정
		{
			for (i = 0; i < num; i++) // 입력한 값만큼 반복
			{
				printf("*"); // 높이 출력
			}
			printf("\n"); 
		}
		else
			continue; // 범위 벗어나면 재입력

	} while (num != -1); // -1 입력시 종료

	return 0;
}