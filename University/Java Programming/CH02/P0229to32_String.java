// 예제 2-29 ~ 2-32
public class P0229to32_String {
	public static void main(String[] args) {
		// source 2-29
		// 문자열의 생성 1
		String szStr1 = "Java Application";
		String szStr2,szStr3;
		szStr2 = "Java Applet";
		szStr3=szStr2;
		
		// source 2-30
		// 문자열의 생성 2
		String szStr4 = new String("Java Application");
		
		// source 2-31
		// +연산자의 사용
		String szStr5="Java";
		String szStr6 = "Application";
		String szStr7 = szStr5+szStr6;
		szStr7 = "Java "+2;
		szStr7 = "Java "+2.0;
		szStr7 = true + " lies";
		
		// source 2-32
		// println() 메소드의 사용 예
		System.out.println("Java String");
		System.out.println('c');
		System.out.println(true);
		System.out.println(2.0);
		
	}
}
