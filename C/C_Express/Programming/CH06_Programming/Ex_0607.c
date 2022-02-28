/*
0607.

사용자로부터 키를 입력받아서 표준 체중을 계산한 후에 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램을 작성하라.
표준 체중 계산식은 다음을 사용하라.

*/
#include <stdio.h>

int main(void)
{
	int cm, kg; // 키, 체중
	int standard_weight; // 표준 체중
	printf("체중과 키를 입력하시오(키, 체중): ");
	scanf_s("%d %d", &cm, &kg);

	standard_weight = (cm - 100)*0.9;

	if (kg > standard_weight)
		printf("과체중입니다.\n");
	else if (kg < standard_weight)
		printf("저체중입니다.\n");
	else
		printf("표준입니다.\n");

	return 0;
}