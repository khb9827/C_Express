// 난수 생성 프로그램
#include <stdio.h>
#include <stdlib.h> // rand()의 원형 정의
#include <time.h> // time()의 원형 정의

#define MAX 45

int main(void)
{
	int i;
	
	srand((unsigned)time(NULL)); // 난수 발생기의 시드값을 현재 시각으로 설정

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + rand() % MAX); // 난수 발생 함수

	return 0;
}