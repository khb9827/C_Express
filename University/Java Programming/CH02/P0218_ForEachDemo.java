// for-each문의 예
public class P0218_ForEachDemo {
	public static void main(String[] args)
	{
		int[] arrayOfInts = {32, 87, 3, 589, 12, 1076, 2000, 8, 622, 127};
		
		for(int element : arrayOfInts) {
			System.out.println(element+" ");
		}
		System.out.println();
	}
}
