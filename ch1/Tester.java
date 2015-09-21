package CH1;

public class Tester {
	public static void main(String args[]){
		Solution01 tester1 = new Solution01();
		
		Solution03 tester3 = new Solution03();
		char[] t3 = "h ah ah a       ".toCharArray();
		tester3.URLify(t3, 9);
		System.out.println(t3);
		
		Solution04 tester4 = new Solution04();
		System.out.println("solution4 is "+tester4.Palindrome("abaacdaaabaa"));
	}
	
	
	
	
}
