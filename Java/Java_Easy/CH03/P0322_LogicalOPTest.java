
public class P0322_LogicalOPTest {
	public static void main(String[] args)
	{
		boolean a;
		a=(20>10)||(30>40); // OR 논리 연산자 수행
		System.out.println("20이 10보다 크거나 또는(논리합 ||) 30이 40보다 큰가? "+a);
		
		a=(20>10)&&(30>40); // AND 논리 연산자 수행
		System.out.println("20이 10보다 크고 그리고(논리곱 &&) 30이 40보다 큰가? "+a);
		
		a=!true; // NOT 논리 연산자 수행
		System.out.println("true의 !(not)은? "+a);
		
		// 출력문에 직접 논리 연산자 사용
		System.out.println("20이 10보다 크거나 또는(논리합||) 30이 40보다 큰가? "+((20>10)||(30>40)));
		System.out.println("20이 10보다 크거나 그리고(논리곱&&) 30이 40보다 큰가? "+((20>10)&&(30>40)));
		System.out.println("true의 !(not)은? "+(!true));
	}
}
