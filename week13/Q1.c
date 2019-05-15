#include <stdio.h>
#include <stdlib.h>

void print_matrix(int N, int M, int mat[N][M]){

	int i, j;

	for(i=0; i < N; i++){
		for(j=0; j <M; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

}


int main(void){

	int N, M;
	scanf("%d %d", &N, &M);

	int matrix[N][M];
	int i,j;

	for(i=0; i < N; i++){
		for(j=0; j <M; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	print_matrix(N, M, matrix);

	for(i=0; i < M; i++){
		for (j=0; j< N; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}


	return 0;
}
