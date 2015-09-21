package CH1;

public class Soluiton05 {
	public boolean edit(String a, String b){
		int alen = a.length();
		int blen = b.length();
		if(alen == blen){
			if(reverseSimilar(a,b) ==  alen + blen -1)return true;
			return false;
		}
		if(Math.abs(alen - blen) == 1){
			if(reverseSimilar(a,b) == Math.max(alen, blen))return true;
			return false;
		}
		return false;
	}
	
	
	
	
	public int reverseSimilar(String a, String b){
		
		int cnt1 = 0;//count forward
		int cnt2 = 0;//count backward
		
		int alen = a.length();
		int blen = b.length();
		
		int i = 0;
		while(i<Math.max(alen,blen)){
			if(a.charAt(i) != b.charAt(i)) break;
			i++;
			cnt1++;
		}
		
		i = alen;
		int j = blen;
		while(i * j == 0){
			if(a.charAt(i) != b.charAt(j)) break;
			i--;
			j--;
			cnt2++;
		}
		
		return cnt1 + cnt2;
	}
}
