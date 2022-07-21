#include <stdio.h>

#define STUDENTS 10 // 기호 상수로 학생들의 수를 나타냄. 후에 학생들의 수 변경 시 값만 변경하면 됨

int main(void)
{
	int grade[STUDENTS]; // 각 학생들의 성적을 저장할 크기가 10인 정수형 배열을 선언
	int sum = 0; // 성적의 합계를 저장할 변수 sum을 선언. sum에는 성적들이 계속 더해지므로 초기값은 0이어야 함
	int i, average;

	for (i = 0; i < STUDENTS; i++) 
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf_s("%d", &grade[i]);
	}

	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	printf("학생 평균 = %d\n", average);

	return 0;
}