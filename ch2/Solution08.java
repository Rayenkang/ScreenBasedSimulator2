package CH2;

public class Solution08 {
	public Llistnode loop(Llist list){
		Llistnode l = list.getfirst();
		Llistnode fast = l;
		Llistnode slow = l;
		
		while(fast != slow){
			fast = fast.next.next;
			slow = slow.next;
			
		}
		
		
		slow = l;
		
		while(fast!= slow){
			fast = fast.next;
			slow = slow.next;
		}
		
		return fast;
	}
}
