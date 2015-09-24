package CH4;

public class Solution05 {
	public boolean isBST(TreeNode n){
		if(n.left != null){
			if(n.data < n.left.data) return false;
			isBST(n.left);
		}
		if(n.right != null){
			if(n.data > n.right.data) return false;
			isBST(n.left);
		}
		return true;
		
	}
}
