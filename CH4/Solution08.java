package CH4;

public class Solution08 {
	public TreeNode lowestAncestor(TreeNode root,TreeNode n, TreeNode t){
		if(root == null)return null;
		if(root == n)return n;
		if(root == t)return t;
		
		boolean onleft = contain(root.left,n);
		boolean onright  = contain(root.right,n);
		
		if(onleft != onright)return root;
		else if(onleft)return lowestAncestor(root.left,n,t);
		else return lowestAncestor(root.right,n,t);
		
		
	}
	
	public boolean contain(TreeNode p, TreeNode c){
		if( p == null) return false;
		if(p == c)return true;
		return contain(p.left,c) || contain(p.right,c);
	}
}
