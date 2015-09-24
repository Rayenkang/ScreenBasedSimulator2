package CH4;

public class Solution11 {
	TreeNode root;
	int NodeNum;
	
	public void insert(TreeNode t){
		TreeNode n = root;
		while(n!=null){
			if(t.data < n.data) {
				if(n.left == null)break;
				n = n.left;
			}
			else{
				if(n.right == null) break;
				n = n.right;
			}
			
		}
		if(t.data > n.data) n.left = t;
		else n.right = t;
	}
	
	
	
	public TreeNode find(int s){
		TreeNode n = root;
		
		while(n!= null){
			if(s == n.data) return n;
			if(s>n.data){
				n = n.left;
			}
			else{n = n.right;}
		}
		return null;
	}
	
	
	public void delete(int s){
		TreeNode n = root;
		TreeNode parent = root;
		
		while(n!= null){
			if(s == n.data) break;
			if(s>n.data){
				parent = n;
				n = n.left;
				
			}
			else{
				parent = n;
				n = n.right;
			}
		}
		
		//if n is a leaf
		if(n.right == null && n.left == null){
			if(parent.left == n) parent.left = null;
			else parent.right = null;
		}
		
		//n no right child
		else if(n.right == null){
			if(parent.left == n )parent.left = n.left;
			else parent.right = n.left;
		}
		
		else if(n.left == null){
			if(parent.left == n )parent.left = n.right;
			else parent.right = n.right;
		}
		//have right child
		else {
		TreeNode leftmax = n.left;//find left max child
		TreeNode parentformax = n;
		while(leftmax.right != null){
			parentformax = leftmax;
			leftmax = leftmax.right;
			
		}
		
		if(parentformax == n.left){
			if(parent.left == n){
				parent.left = n.left;
				n.left.right = n.right;
			}
			else {
				parent.right = n.left;
				n.left.right = n.right;
			}
		}
		
		else{
			parentformax.right = null;
			if(parent.left == n)parent.left = leftmax;
			else parent.right = leftmax;
			
			parent.left = leftmax;
			leftmax.right = n.right;
			leftmax.left = n.left;
			
		}
	
		}
		
	}
	
	public int NodeNum(TreeNode n){
		if(n == root)NodeNum = 0;
		NodeNum++;
		NodeNum(n.left);
		NodeNum(n.right);
		return NodeNum;
	}
	
	public TreeNode RandomNode(){
		int size = NodeNum(root);
		int number = (int)Math.random()*size;
		return choose(root,number,0);
	}
	
	public TreeNode choose(TreeNode n, int ch, int current){
		if(current == ch)return n;
		current++;
		choose(n.left,ch,current);
		choose(n.right,ch,current);
		return null;
		
	}
}
