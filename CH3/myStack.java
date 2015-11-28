package CH3;


public class myStack {
	int[] array;
	int singlesize;
	int pointer;
	
	
	
	myStack(int size){
		singlesize = size;
		array = new int[size];
		pointer = -1;
		
		
	}
	
	public boolean isEmpty(){
		return pointer ==  - 1;
		
	}
	
	public boolean isFull(){
		return pointer == singlesize - 1;
	}

	public boolean push(int num, int data){
		if(isFull()) return false;
		array[ ++pointer ] = data;
		return true;
		
	}
	
	public int pop(int num, int data){
		if(isEmpty()) return 0;
		return array[pointer--];
		
		
	}
}
