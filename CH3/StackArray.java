package CH3;

public class StackArray {
	int[] array;
	int singlesize;
	int[] pointer;
	
	
	
	StackArray(int size){
		singlesize = size;
		array = new int[size * 3];
		pointer = new int[3];
		pointer[0] = -1;
		pointer[1] = size - 1;
		pointer[2] = 2 * size - 1;
		
	}
	
	public boolean isEmpty(int num){
		return pointer[num] == singlesize * num - 1;
		
	}
	
	public boolean isFull(int num){
		return pointer[num] == singlesize * num - 1;
	}

	public boolean push(int num, int data){
		if(isFull(num)) return false;
		array[ ++pointer[num] ] = data;
		return true;
		
	}
	
	public int pop(int num, int data){
		if(isEmpty(num)) return 0;
		return array[pointer[num]--];
		
		
	}
}
