/*
0902.

주사위를 던져서 각각의 면이 몇 번 나왔는지를 출력하는 프로그램을 작성하라.
주사위의 면은 난수를 이용하여 생성한다.
주사위를 던지는 함수 get_dice_face()를 만들고 이 함수 안에서 각각의 면이 나올 때마다 그 횟수를 정적 지역 변수를 이용하여 기억하게 하라.
get_dice_face() 호출 횟수가 100의 배수일 때마다 면이 나온 횟수를 출력한다.

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void get_dice_face()
{
	int face;
	static int n1, n2, n3, n4, n5, n6; // 정적 지역 변수


	for (int i = 1; i <= 10000; i++)
	{
		face = rand() % 6 + 1; // 1 ~ 6

		switch (face)
		{
		case 1:
			n1++;
			break;

		case 2:
			n2++;
			break;

		case 3:
			n3++;
			break;

		case 4:
			n4++;
			break;

		case 5:
			n5++;
			break;

		case 6:
			n6++;
			break;
		}

		if (i % 100 == 0)
		{
			printf("%d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);
		}
	}
}

int main(void)
{
	srand((unsigned)time(NULL)); // 난수 초기화

	get_dice_face();

	return 0;
}