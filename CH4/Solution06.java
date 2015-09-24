package CH4;

public class Solution06 {
	public TreeNode findNext(TreeNode n){
		if(n.right != null) return n.right;
		while(n == n.parent.right){
			n = n.parent;
		}
		n = n.parent;
		while(n.left != null){
			n = n.left;
		}
		return n;
	}
}
