package CH2;

public class Llist {
	private Llistnode first;
	

	
	public Llistnode getfirst(){
		return first;
	}
	
	
	public void setfirst(Llistnode l){
		first = l;
	}
	
	
	public void add(Llistnode l){
		Llistnode current = first;
		if(current == null){first = l;}
		else{
			
		
		while (current.next!=null){
			current = current.next;		
		}
		current.next = l;
		}
	
		
	}
	
	
	public void display(){
		Llistnode current = first;
		while(current!=null){
			System.out.println(current.data);
	
		current = current.next;
		}
	}

	public void displayint(){
		Llistnode current = first;
		while(current!=null){
		
			System.out.println(current.dataint);
		current = current.next;
		}
	}
	
	Llist(){
		
	}
	Llist (String[] s){
		for (int i = 0 ; i <s.length; i++){
			this.add(new Llistnode(s[i]));
		}
	}
	
	
	
Llist (int [] s){
	for (int i = 0 ; i <s.length; i++){
			this.add(new Llistnode(s[i]));
		}
	}
}
