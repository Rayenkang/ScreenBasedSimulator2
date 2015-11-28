package CH1;

/*Assume that the string only contains 26 English letter
 * Case Sensitive
 * If the string contains other character, only change the scale of the method without change much.
 */

public class Solution01 {
	
	
	public boolean isUnique(String s){
		char[] str = new char[52];
		int j = 0;
		str[0] = s.charAt(0);
		for ( int i = 1; i < s.length(); i++ ){ 
			j = 0;
			while ( str[j] != 0){
				if ( s.charAt(i) == str[j] )return false;		
				j++;
			}
			str[j] = s.charAt(i);
		}
		return true;
		
	}
	
	
	
}
