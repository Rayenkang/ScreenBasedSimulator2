package CH3;

import java.util.Stack;

public class Solution02 extends Stack{

	Stack<Integer> minstack = new Stack<Integer>();
	public Integer push(Integer i){
		
		if(i<peekmin())addmin(i);
		
		return (Integer) super.push(i);
		
		
		
	}
	
	
	public Integer min(){
		return minstack.pop();
	}
	
	public void addmin(Integer i){
		minstack.push(i);
	}
	
	
	public Integer peekmin(){
		if(minstack.isEmpty())return null;
		return minstack.peek();
		
	}

	
	
}
