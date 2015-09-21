package CH2;

// use the dataint part of the List
public class Solution06 {
	public boolean isPalindrome(Llist pali){
		Llistnode l = pali.getfirst();
	//	pali.displayint();
		Llist rev = new Llist();
		reverse(rev,l);
		Llistnode revl = rev.getfirst();
		
	//	rev.displayint();
		while(l!=null && revl!= null){
			if(l.dataint != revl.dataint){
				return false;
			}
		}
		return true;
		
		
		
			}
	
	
	public void reverse(Llist l,Llistnode n){
		if(n.next == null){}
		else{
		
			reverse(l,n.next);
			
		}
		l.add(n);
	
	}
}
