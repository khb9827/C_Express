/*
0702.

반복 루프는 파일의 끝을 만날 때까지 자료를 처리하는 데 많이 사용된다.
표준 입력에서는 사용자가 Ctrl+z를 입력하면 파일의 끝으로 간주한다.
scanf()가 Ctrl+z를 만나면 EOF를 반환한다.
사용자가 Ctrl+z를 누르기 전까지, 입력한 정수의 합을 계산하여 출력하는 프로그램을 작성하여 테스트하라.

*/

#include <stdio.h>

int main(void)
{
	int num; // 입력받을 정수
	int sum = 0; // 합계

	while (scanf_s("%d", &num) != EOF)
	{
		sum += num;
	}

	printf("정수의 합은 %d입니다.\n", sum);

	return 0;
}