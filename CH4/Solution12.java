package CH4;

public class Solution12 {
	int numSum = 0;

	
	public int numofSum(TreeNode n, int goal){
		numSum += sumEachNode(n,goal,0);
		if(n.left!= null){
			numofSum(n.left,goal);
		}
		if(n.right!=null){
			numofSum(n.right,goal);
		}
		return numSum;
	}
	
	public int sumEachNode(TreeNode n, int goal,int currentvalue){
		if(n == null)return 0;
		int currentpathnum = 0;
		currentvalue += n.data;
		if(currentvalue == goal){
			currentpathnum++;
		}
		currentpathnum += sumEachNode(n.left,goal,currentvalue)+sumEachNode(n.right,goal,currentvalue);
		return currentpathnum;
		
	}
}
