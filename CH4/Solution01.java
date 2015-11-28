package CH4;

import java.util.LinkedList;


public class Solution01 {
	public boolean findroute(Graph g, GNode Start, GNode Connect){
	
		LinkedList<GNode> l = new LinkedList<GNode>();
		
		l.add(Start);
		
		while(!l.isEmpty()){
			GNode current = l.removeFirst();
			
			
			for( GNode n : current.adjacent){
				if(n == Connect)return true;
				if(!n.visited){
					l.add(n);
					n.visited = true;
				}
				
				
			}
			
		}
		return false;
	}
}
