
public class P0309_FloatDoubleTest {
	public static void main(String[] args) {
		float a = 12345678901234567890.0f; // float형으로 유효 자리수가 많은 수를 배정
		double b = 12345678901234567890.0; // double형으로 유효 자리수가 많은 수를 배정
		System.out.println("float 변수 a의 값은 : " + a);
		System.out.println("double 변수 b의 값은 : " + b);
		float c= 1.0f/3.0f; // float형으로 연산을 수행
		double d = 1.0/3.0; // double형으로 연산을 수행
		System.out.println("float 변수 c의 값은 : "+c);
		System.out.println("double형의 변수 d의 값은 : "+d);
	}
}
