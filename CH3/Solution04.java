package CH3;

import java.util.Stack;

public class Solution04 {
	Stack a;
	Stack b;
	
	public void push(Integer i){
		if(a.isEmpty() && b.isEmpty())a.push(i);
		else if(a.isEmpty()){
			transf(b,a);
			a.push(i);
		}
		else{
			a.push(i);
		}
	}
	
	public Integer pop(){
		if(a.isEmpty() && b.isEmpty()) return null;
		else if(b.isEmpty()){
			transf(a,b);
			return (Integer) b.pop();
		}
		else {
			return (Integer)b.pop();
		}
	}
	
	public void transf(Stack pre, Stack t){
		while (!pre.isEmpty()){
			t.push(pre.pop());
		}
	}
}
