package CH1;

public class Solution06 {
	public String compress(String s){
		String n = "";
		int cnt = 1;
		
		int i = 0;
		while(i<s.length()){
			if(s.charAt(i+1) != s.charAt(i)){
				n += s.charAt(i) + cnt;
				cnt = 0;
			}
			cnt ++;
			i++;
			
		
	}
		return n.length() <= s.length()? n:s;
}
}