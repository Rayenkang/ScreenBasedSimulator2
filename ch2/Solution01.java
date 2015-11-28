package CH2;

import java.util.HashSet;


public class Solution01{  
	public void removedup ( Llist list){
		Llistnode current = list.getfirst();
		Llistnode previous = current;
		HashSet<String> buffer = new HashSet<String>();
		while (current.next != null){
			if(!buffer.add(current.data)){
			previous.next = current.next;
			}
			
			previous = current;
			current = current.next;
			
		}
	}
}  