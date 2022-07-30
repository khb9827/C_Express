/*
0905.

은행 계좌에서 저축하고 인출하는 프로그램을 작성하여 보자.
save(int amount) 함수는 저축할 금액 amount를 받으며 save(100)과 같이 호출된다.
draw(int amount)은 예금 인출을 나타낸다.
사용자에게 메뉴를 보여주고 저축 또는 인출을 선택하게 한다.

*/

#include <stdio.h>

static int total; // 예금 총액

// 저축
int save(int amount)
{
	total += amount;
	return total;
}

// 인출
int draw(int amount)
{
	total -= amount;
	return total;
}

int main(void)
{
	int num; // 메뉴 선택
	int amount; // 예금
	while (1)
	{
		printf("메뉴를 선택하세요: 저축(1) 인출(2) : ");
		scanf_s("%d", &num);

		if (num == 1)
		{
			printf("저축할 금액: ");
			scanf_s("%d", &amount);
			save(amount);
		}
		else if (num == 2)
		{
			printf("인출할 금액: ");
			scanf_s("%d", &amount);
			draw(amount);
		}
		else
		{
			printf("종료\n");
			break;
		}
			
		printf("현재 잔액은 %d입니다.\n", total);
	}
}