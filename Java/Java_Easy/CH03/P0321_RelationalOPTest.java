
public class P0321_RelationalOPTest {
	public static void main(String[] args) {
		byte a = 20;
		double d = 3.14;
		boolean flag;
		flag = a > d; // 관계 연산자 사용. 결과를 이진 변수에 저장
		System.out.println("a가 d보다 큰가? " + flag);
		flag = a == 20.0f; // byte형이 float형으로 자동 변환되어 비교
		System.out.println("a가 20.0f와 같은가? " + flag);
		flag = 10 != 10.0; // 정수 리터럴 10이 실수로 변환되어 비교
		System.out.println("10이 10과 같지 않은가? " + flag);
		flag = 10 <= 20; // 관계 연산자 사용
		System.out.println("10이 20보다 작거나 같은가? " + flag);
		System.out.println("10이 20보다 작은가? " + (10 < 20));
		System.out.println("10이 20보다 크거나 같은가? " + (10 >= 20));

	}
}
