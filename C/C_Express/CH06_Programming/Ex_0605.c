/*
0605.

놀이공원에서 롤러코스터에 타려면 키가 140cm 이상이고 나이가 10살 이상이어야 한다고 가정하자.
사용자에게 키와 나이를 질문한 후에 "타도 좋습니다" 또는 "죄송합니다"를 출력하는 프로그램을 작성하여 보자.

*/

#include <stdio.h>

int main(void)
{
	int cm, age; // 키, 나이

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);

	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	if (cm >= 140 && age >= 10)
		printf("타도 좋습니다.\n");
	else
		printf("죄송합니다.\n");

	return 0;
}