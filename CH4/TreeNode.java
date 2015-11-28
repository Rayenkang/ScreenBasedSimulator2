package CH4;

public class TreeNode {
	int data;
	TreeNode left;
	TreeNode right;
	
	// for solution06
	
	public TreeNode parent;
	
	//for solution10
	int size;
	
	
	public int getSize(){
		return size;
	}
	
	TreeNode(int d){
		d = data;
	}
	
	TreeNode(){
		super();
	}
	
}
