package CH2;

public class Solution05 {
	public Llist addlist(Llist addA, Llist addB){
		Llistnode diga = addA.getfirst();
		Llistnode digb = addB.getfirst();
		Llist outcome = new Llist();
		int digsum = 0;
		int carry = 0;
		
		while (diga!=null || digb!= null){
			if(diga!=null && digb!=null){
				digsum = (diga.dataint + digb.dataint + carry) / 10;
				carry = (diga.dataint + digb.dataint + carry) % 10;
				outcome.add(new Llistnode(digsum));
				diga = diga.next;
				digb = digb.next;
				
			}
			
			else if(diga!=null){
				digsum = (diga.dataint + carry) / 10;
				carry =  (diga.dataint + carry) % 10;
				outcome.add(new Llistnode(digsum));
				diga = diga.next;
			}
			else{
				digsum = (digb.dataint + carry) / 10;
				carry =  (digb.dataint + carry) % 10;
				outcome.add(new Llistnode(digsum));
				digb = digb.next;
			}
			
			
			
		}
		return outcome;
	}
}
