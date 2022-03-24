
public class P0318_ArithmeticOPTest {
	public static void main(String[] args) {
		int a = 5, b = 2;
		int sum = a + b;
		System.out.println("a+b=" + sum);
		int sub = a - b;
		System.out.println("a-b=" + sub);
		int mul = a * b;
		System.out.println("a*b=" + mul);
		int div = a / b;
		System.out.println("a/b=" + div);
		int mod = a % b; // 나머지 연산자
		System.out.println("a%b=" + mod);
		int c = ++a; // 단항연산자값을 증가시킨 후에 배정
		System.out.println("a의 전위 증가 연산(prefix)=" + c);
		System.out.println("a 변수의 값 : " + a);
		int d = b++; // 단항연산자값을 배정한 후에 1 증가
		System.out.println("b의 후위 증가 연산(postfix)=" + d);
		System.out.println("b 변수의 값 : " + b);
	}
}
