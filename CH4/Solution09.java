package CH4;

import java.util.ArrayList;

public class Solution09 {
	ArrayList<TreeNode> tn = new ArrayList<TreeNode>();
	
	public void Output(TreeNode n){
		
		System.out.println(n.data);
		tn.remove(n);
		if(n.left != null){
			tn.add(0,n.left);
		}
		if(n.right != null){
			tn.add(0,n.right);
		}

		for(TreeNode current:tn){
			Output(current);
		}
		
		

	
	}
	public void OutArray(TreeNode n){
		tn.add(n);
		Output(n);
	}
}
