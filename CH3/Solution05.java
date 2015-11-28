package CH3;

import java.util.Stack;

public class Solution05 {
	public void sortStack(Stack<Integer> s){
		Stack<Integer> temp = new Stack<Integer>();
		Integer hold;
		while(!s.isEmpty()){
			hold = s.pop();
			while(!temp.isEmpty() && hold<temp.peek()){
				s.push(temp.pop());
			}
			temp.push(hold);
			while(!s.isEmpty() && s.pop()>temp.peek() ){
				temp.push(s.pop());
			}
			
		}
	}
}
