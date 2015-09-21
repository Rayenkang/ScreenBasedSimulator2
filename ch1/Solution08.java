package CH1;

public class Solution08 {
	public void setzero(int[][] matrix,int m, int n){
		boolean[][] setted = new boolean[m][n];
		for(int i = 0; i<m; i++){
			for( int j = 0; j<n; j++){
				if(matrix[i][j] == 0 && setted[i][j] == false){
					
					set(matrix,setted,m,n,i,j);
				}
			}
		}
		
	}
	
	
	public void set(int[][] matrix,boolean[][] setted, int m, int n,int row, int col){
		for (int i = 0; i < n;i++){
			matrix[row][i] = 0; 
			setted[row][i] = true;
		}
		for (int j = 0; j<m;  j++){
			matrix[j][col] = 0;
			setted[j][col] = true;
		}
	}
}
