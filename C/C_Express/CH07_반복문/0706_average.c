// while문을 이용한 성적의 평균 구하기 프로그램
#include <stdio.h>

int main(void)
{
	int grade, n;
	float sum, average;

	// 필요한 변수들을 초기화한다.
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오.\n");

	// 성적을 입력받아서 합계를 구하고 학생 수를 센다.
	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf_s("%d", &grade);

		sum += grade;
		n++;
	}

	// 센티널 값도 합계에 포함되므로 제거해주어야 한다.
	sum = sum - grade;
	n--;

	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}