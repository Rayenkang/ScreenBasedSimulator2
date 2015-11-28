package CH1;

public class Solution03 {
	public void URLify(char[] s, int length){
		int numofS = 0;
		int i = 0;
		for ( i = 0; i<length; i++){
			if( s[i] == ' ') numofS++;
		}
		
		int last = i - 1 + numofS * 2;
		for ( i = i-1 ; i>=0; i--){
			if( s[i] != ' ')s[last--]=s[i];
			else {
				s[last--] = '0';
				s[last--] = '2';
				s[last--] = '%';
				
				
				
			}
		}
	}
}
