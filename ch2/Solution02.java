package CH2;

// k>0
// print the data of k to last


public class Solution02 {
	public void findk (Llist l,int k){
	
		findknode(l.getfirst(),k);
	}
	
	public int findknode (Llistnode l, int k){
		if(l.next == null){
			return 0;
		}
		 int pos = findknode(l.next,k)+1;
		 if( pos == k ){
			 System.out.println("find it"+l.data);
			 
		 }
		return pos;
		
	}
}
