package CH4;

public class Solution10 {
	

	

	public boolean isSubtree(TreeNode large, TreeNode small){
		SetSize(large);
		SetSize(small);
	
		
		TreeNode sroot = findSameNode(large,small);
		if(sroot == null)return false;
		return allSame(sroot,small);
		
		
		
	}
	
	public boolean allSame(TreeNode t, TreeNode s){
		if(t.getSize() != s.getSize())return false;
		if((t.left != s.left) || (s.right != t.right))return false;
		if(t.left == s.left){
			allSame(t.left,s.left);
		}
		if(t.right == s.right){
			allSame(t.right,s.right);
		}
		return true;
	}
	
	
	public TreeNode findSameNode(TreeNode t, TreeNode s){
		if(t == s){
			return t;
		}
		findSameNode(t.left,s);
		findSameNode(t.right,s);
		return null;
	}
	
	
	public void SetSize(TreeNode n){
		n.size++;
		SetSize(n.left);
		SetSize(n.right);
		
	}
}
