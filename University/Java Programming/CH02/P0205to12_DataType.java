
public class P0205to12_DataType {
	public static void main(String args)
	{
		// source 2-6
		// 실수형 리터럴의 사용
		float f = 5.0f;
		double d= 5.0;
		
		// source 2-7
		// boolean형의 사용
		boolean bFlag1, bFlag2;
		bFlag1 =true;
		bFlag2=false;
		bFlag2= 45<29;
		bFlag2=bFlag1;
		
		// source 2-8
		// 참조형의 예
		int anArray[];
		String szString;
		
		// source 2-9
		// 자료형에 따른 오류
		int a=3;
		String s=a; // 자료형의 종류가 아주 다름
		float f;
		a=f; // 자료의 손실이 발생할 수 있음
		
		// source 2-10
		// 묵시적 형변환
		float f1=5.5;
		double d1= f1;
		
		// source 2-11
		// 명시적 형변환
		int a1=3;
		float f2=(float)a1;
		double d2;
		f2=(float)d2;
		
		// source 2-12
		// final을 이용한 상수 선언의 예
		final int nConst = 3;
	}
}
