package CH1;

public class Solution07 {
	public void rotate( int[][] matrix, int n){
		int store;
		for ( int l = 0 ; l < n/2; l++){
			//left
			for(int i = l; i < n -l ; i++ ){
				store = matrix[i][l];
				matrix[i][l] = matrix[l][n-i];
				matrix[l][n-i] = matrix[n-i][n-l];
				matrix[n-i][n-l] = matrix[n-l][i];
				matrix[n-l][i] = store;
			}
			
		
		}
	}
}
