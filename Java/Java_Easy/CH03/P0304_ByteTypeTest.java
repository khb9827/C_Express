
public class P0304_ByteTypeTest {
	public static void main(String[] args) {
		// 범위를 벗어났으나 강제 형변환 배정
		byte a = (byte) 128;
		System.out.println("128을 저장한 byte 값은 : " + a);
		byte b = (byte) 256;
		System.out.println("256을 저장한 byte 값은 : " + b);
	}
}
