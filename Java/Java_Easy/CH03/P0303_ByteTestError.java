
public class P0303_ByteTestError {
	public static void main(String[] args)
	{
		byte a = 128; // 정수사용시 int형 취급. 범위를 벗어나 오류 발생
		System.out.println("128을 저장한 byte 값은: "+a); 
	}
}
