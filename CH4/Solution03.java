package CH4;

import java.util.ArrayList;
import java.util.LinkedList;

public class Solution03 {
	ArrayList<LinkedList<TreeNode>> lList = new ArrayList<LinkedList<TreeNode>>();  
	int layer = 0;
	
	public void traverse(TreeNode n){
		if(lList.size() < layer + 1)lList.add(new LinkedList<TreeNode>());
		lList.get(layer).add(n);	
		
		if(n.left != null) {
			layer++;
			traverse(n.left);
			layer--;
		}
		if(n.right!= null) {
			layer++;
			traverse(n.right);
			layer--;
		}
	}
}
