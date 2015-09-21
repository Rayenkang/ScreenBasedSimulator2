package CH2;

public class Solution04 {
	public Llist partition(Llist l, int k){
	
		Llistnode rear = null;
		Llist newl = new Llist();
		
		Llistnode lh = l.getfirst();
		Llistnode current = lh;
		while(current!=null){
			if(current.dataint < k){
				
				if(newl.getfirst()==null){
					newl.setfirst(current);
					rear = current;
				}
				else{
					current.next = newl.getfirst();
					newl.setfirst(current);
				}			
			}
			else{
				if(rear==null){newl.setfirst(current);}
				else{
					rear.next = current;
					rear = current;
				}
				
			}
			
			current = current.next;
		}
		
		
		return newl;
		
	}
	
	
	
}
