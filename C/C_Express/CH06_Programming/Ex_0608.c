/*
0608.

놀이 공원의 자유이용권의 가격을 계산하는 프로그램을 작성하여 보자.
입장료는 다음과 같은 조건으로 결정된다.
현재 시간과 사용자의 나이를 입력받아서 지불하여야 하는 요금을 화면에 출력한다.

자유이용권(오후 5시 이전) 대인 34,000 소인(3~12세/65세 이상) 25,000
야간이용권(오후 5시 이후) 대,소인 10,000

*/

#include <stdio.h>

int main(void)
{
	int price; // 요금
	int age, time; // 나이, 시간

	printf("현재시간과 나이를 입력하시오(시간, 나이): ");
	scanf_s("%d %d", &time, &age);

	if (time <= 17)
	{
		if (age >= 3 && age <= 12 || age >= 65)
			price = 25000;
		else
			price = 34000;
	}
	else
		price = 10000;

	printf("요금은 %d원입니다.\n", price);

	return 0;
}