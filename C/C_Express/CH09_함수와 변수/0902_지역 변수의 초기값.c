#include <stdio.h>

int main(void)
{
	int temp; // 초기화x 이므로 쓰레기값을 가짐. 항상 지역변수는 초기화해야 함

	printf("temp = %d\n", temp);
}