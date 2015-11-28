package CH1;

public class Solution04 {
	public boolean Palindrome (String s){
		char[] dic = new char[128];
		for (int i = 0; i<s.length();i++){
			dic[s.charAt(i)] += 1;
		}
		
		int count = 0;
		for (int j = 0; j<128; j++){
			if( dic[j]!= 0 && dic[j] % 2 == 1)count++;
			if ( count > 1) return false;
		}
		
		
		return true;
		
	}

	
	
}
