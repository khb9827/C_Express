
public class P0312_TestDouble {
	public static void main(String[] args)
	{
		// 실수 변수 선언 및 초기화
		double r=5.0;
		double pi=3.14159; 
		
		System.out.printf("반지름이 %f인 원의 넓이는 %f입니다.\n", 5.0,3.14159*5*5); // %f를 사용하여 실수를 출력
		System.out.printf("반지름이 %f인 원의 넓이는 %f입니다.\n", r,pi*r*r); // %f를 사용하여 실수 변수 값을 출력
		System.out.printf("반지름이 %e인 원의 넓이는 %e입니다.\n", r,pi*r*r	); // %e를 사용하여 실수 변수 값을 출력
		System.out.printf("123.456을 %%f로 : %f\n", 123.456); // %f를 사용하여 123.456 출력
		System.out.printf("123.456을 %%e로 : %e\n", 123.456); // %e를 사용하여 123.456 출력
		System.out.printf("-123.456을 %%E로 : %E\n", 123.456); // %E를 사용하여 123.456 출력
		
	}
}
