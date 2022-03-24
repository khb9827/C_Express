
public class P0316_CastingTest2 {
	public static void main(String[] args)
	{
		// int형 변수에 문자값을 배정
		int i='1';
		int j='A';
		int k='1'+'A'; // int형 변수에 문자값의 연산 결과 배정
		System.out.println("\'1\' = "+i);
		System.out.println("\'A\' = "+j);
		System.out.println("\'1\'+\'A\' = "+k);
		int l=66;
		System.out.println("10진수 66에 해당되는 유니코드 문자는 "+(char)l+" 입니다");
	}
}
