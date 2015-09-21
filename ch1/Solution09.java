package CH1;

public class Solution09 {
	public boolean isrotate(String s1, String s2){
		if(s1.length()!=s2.length())return false;
		
		s2 += s2;
		return (isSubstring(s1,s2));
	}
	
	public boolean isSubstring(String s1,String s2){
		return s1.contains(s2);
	}
	
}
