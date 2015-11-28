package CH3;

import java.util.ArrayList;
import java.util.Stack;

public class Solution03 extends Stack{
	ArrayList<Stack> stackray;
	int thr;
	int cnt;//cnt the index of stack
	int current; // the current stack
	
	public void push(Integer i){
		if(stackray.isEmpty())stackray.add(new Stack());
		if(cnt == thr){
			stackray.add(new Stack());
			current++;
			cnt = 0;
		}
		stackray.get(current).push(i);
		cnt++;
		
		
	}
	
	public Integer pop(){
		
		Integer popper = (Integer) stackray.get(current).pop();
		cnt--;
		if(cnt == 0){
			cnt = thr;
			stackray.remove(current--);
		}
		return popper;
		
	}

	
	Solution03(int threshold){
		thr = threshold;
		
	}
}
