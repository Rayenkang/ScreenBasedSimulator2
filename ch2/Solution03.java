package CH2;

public class Solution03 {
	public boolean deleten (Llistnode n){
		if( n == null || n.next == null){
			return false;
		}
		else{
			Llistnode next = n.next;
			n.data = next.data;
			n.next = next.next;
			return true;
		}
	}
}
