/* Ex 04_03.c */
#include <stdio.h>

int main(void)
{
	int count;
	int value1, value2;
	float temperature = 10.5f;

	count = 10;
	value1 = ++count; // 전위형
	printf("value1 = %d, count = %d\n", value1, count);

	count = 10;
	value2 = count++; // 후위형
	printf("value2 = %d, count = %d\n", value2, count);

	count = 10;
	++count; // 전위형
	printf("count = %d\n", count);

	count = 10;
	count++; // 후위형
	printf("count = %d\n", count);

	temperature++; // 실수형에도 증감 연산자를 사용할 수 있다.
	printf("temperature = %f\n", count);

	return 0;
}