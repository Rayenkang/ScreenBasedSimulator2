package CH2;

public class Tester {
	public static void main(String[] args){
		Solution01 test01 = new Solution01();
		String[] constructor = new String[5];
		
		constructor[0] = "11";
		constructor[1] = "22";
		constructor[2] = "33";
		constructor[3] = "44";
		constructor[4] = "55";
		
		int[] int6 = {1,3,5,7,9};
		
		
		Llist tlist = new Llist(constructor);
		tlist.display();
		
	
		Solution02 test02 = new Solution02();
		test02.findk(tlist, 4);
		
		Solution06 test06 = new Solution06();
		
	//	test06.isPalindrome(new Llist(int6));
		
	}
}
