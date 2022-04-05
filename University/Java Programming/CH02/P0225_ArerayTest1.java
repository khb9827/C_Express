// 배열 선언의 예
public class P0225_ArerayTest1 {
	public static void main(String args[]) {
		/* 1차원 배열의 선언 */
		int anArray1[];
		int[] anArray2;
		int anArray3[10]; // 오류. 선언 시 크기를 명시할 수 없다.
		anArray1[0]=1; // 오류. 초기화나 생성 전에 배열을 사용할 수 없다.
		/* 2차원 배열의 선언 */
		int anArray4[][];
		int[][] anArray5;
		int[] anArray6[]; // 오류는 아니지만 좋지 않은 표현이다.
	}
}
