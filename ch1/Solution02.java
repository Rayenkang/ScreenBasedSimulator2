package CH1;
import java.util.Arrays;

public class Solution02 {
	public boolean isPermutation(String first, String second){
		char[] s1 = first.toCharArray();
		char[] s2 = second.toCharArray();
		Arrays.sort(s1);
		Arrays.sort(s2);
		String s = new String(s1);
		String t = new String(s2);
		if(s.equals(t))return true;
		return false;
		
		
	}
}
