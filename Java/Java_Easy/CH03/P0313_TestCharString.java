
public class P0313_TestCharString {
	public static void main(String[] args)
	{
		char ch1='A'; // 문자형 변수 선언 및 A로 초기화
		String name = "홍길동"; // 문자열 생성 위해 String 클래스 객체 선언
		
		System.out.printf("%c\n", 'A'); // %c를 사용해 문자 리터럴 출력
		System.out.printf("%s\n", "AB"); // %s를 사용해 문자 리터럴 출력
		System.out.printf("%s\n", "AB CCCCC"); // %s를 사용해 문자 리터럴 출력
		System.out.printf("%s씨 %s\n%s\n",name,"재미있는 자바언어","열심히 하세요" ); // %s를 사용해 문자열 객체와 문자열 리터럴 출력
	}
}
