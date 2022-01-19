/*
실습. 사각형의 둘레와 면적

직사각형의 둘레와 면적을 구하는 프로그램을 작성하여 보자.
직사각형의 가로와 세로를 각각 w와 h라고 하면 직사각형의 면적은 w*h가 되고 둘레는 2*(w+h)가 된다.

*/

#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double area;
	double perimeter;

	// 도전 2
	// double w, h, area, perimeter;

	// 도전 3
	// printf("가로 세로 길이 입력: ");
	// scanf_s("%lf %lf", &w, &h);
	
	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);

	// 도전 1
	// printf("사각형의 넓이: %lf \n사각형의 둘레: %lf\n", area, perimeter);

	return 0;
}