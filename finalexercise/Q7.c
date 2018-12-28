#include<stdio.h>




int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int mat[n][m];
	int zeros_max[m];
	int i, j;
	for(i=0; i < n; i++){
		for(j=0; j <m; j++){
			scanf("%d", &mat[i][j]);
		}
	}

	for(j=0; j < m; j++) zeros_max[j]=0;


	int count =0;
	for(i=0; i < m; i++){
		for(j=0; j <n; j++){
			if(mat[j][i]==0 && count==0){
				count +=1;
				zeros_max[i] = count>zeros_max[i]? count:zeros_max[i];
			}
			else if(mat[j][i] + mat[j-1][i]==0)
			{
				count +=1;
				zeros_max[i] = count>zeros_max[i]? count:zeros_max[i];
			}
			else
			{
				count =0;
			}
		}
		count =0;
	}

	for(i=0;i < m; i++) {
		printf("%d ", zeros_max[i]);
	}
	/* here we simply list the number of consecutive 0's
	 * you can find the max num among zeros_max array*/
	 */

	return 0;
}
