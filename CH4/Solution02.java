package CH4;


/*treenode = mid
 * left = create(arr,start,end)
 * right = create(arr.start,end)
 */

public class Solution02 {
	public TreeNode createBST(int[] i,int start,int end){
			int mid = (start + end) / 2;
			TreeNode n = new TreeNode(mid);
			n.left = createBST(i,start,mid - 1);
			n.right = createBST(i, mid + 1, end);
			return n;
	}
	
	public TreeNode createBST(int[] i){
		return createBST(i,0,i.length);
	}
}
