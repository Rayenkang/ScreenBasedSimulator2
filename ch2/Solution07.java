package CH2;

public class Solution07 {
	public Llistnode intersec(Llist alist, Llist blist){
		Llistnode a = alist.getfirst();
		Llistnode b = blist.getfirst();
		
		int alen = 0;
		int blen = 0;
		
		while (a.next != null){
			alen++;
			a = a.next;
		}
		
		while (b.next != null){
			alen++;
			b = b.next;
		}
		
		if (a != b) return null;
		
		a = alist.getfirst();
		b = blist.getfirst();
		
		if(alen>blen){	
			for(int i = 0; i<alen-blen; i++){
				a = a.next;
			}	
		}
		
		if(alen<blen){	
			for(int i = 0; i<blen-alen; i++){
				b = b.next;
			}	
		}
		
		while (a!=null){
			if( a == b) return a;
			a = a.next;
			b = b.next;
		}
		return null;
		
	}
}
