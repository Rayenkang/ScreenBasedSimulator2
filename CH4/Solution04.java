package CH4;

public class Solution04 {
	int misschild;

	public boolean isBalanced(TreeNode n){
		if(misschild == 1){
			if(n.left != null || n.right != null)return false;
			else misschild = 0;
		}
		if((n.left == null && n.right != null) || (n.left != null && n.right == null)){
			misschild = 1;
		}
		
		if(n.left != null) isBalanced(n.left);
		if(n.right!= null) isBalanced(n.right);
		return true;
		
	}
}
