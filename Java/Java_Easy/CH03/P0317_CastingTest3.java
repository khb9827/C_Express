
public class P0317_CastingTest3 {
	public static void main(String[] args) {
		long l = 1234567890123456789L; // 19자리 정수를 long값으로 저장
		float f = l; // long값을 float형으로 확대 형변환(자동 변환 가능)
		double d = l; // long값을 double형으로 확대 형변환(자동 변환 가능)
		System.out.println("원래의 long값 : " + l);
		System.out.println("long >> float로 변환 : " + f);
		System.out.println("long >> double로 변환 : " + d);
		long f1 = (long) f; // float값을 long값으로 명시적 축소 형변환
		long d1 = (long) d; // double값을 long값으로 명시적 축소 형변환
		System.out.println("long >> float >> long으로 변환 : " + f1);
		System.out.println("long >> double >> long으로 변환 : " + d1);
	}
}
