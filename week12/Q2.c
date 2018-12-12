/*
 ============================================================================
 Name        : Tester.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define BOARDSIZE 8

void read_matrix(int chessboard[BOARDSIZE][BOARDSIZE]){
	int i, j;
	for(i=0; i < BOARDSIZE; i++){
		for(j=0; j <BOARDSIZE; j++){
			scanf("%d", &chessboard[i][j]);
		}
	}

}

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


	int matrix[BOARDSIZE][BOARDSIZE];
	int i,j;
	int rookx, rooky;

	read_matrix(matrix);

	for(i=0; i < BOARDSIZE; i++){
		for (j=0; j< BOARDSIZE; j++){
			if(matrix[i][j]== 8)
			{
				rookx=i;
				rooky=j;
				break;
			}
		}
	}

	int lookaround=1;

	while(1)
	{
		if(rooky - lookaround >=0 && matrix[rookx][rooky-lookaround]==1)
		{
			matrix[rookx][rooky-lookaround] = 8;
			matrix[rookx][rooky] =0;
			break;
		}
		else if(rooky - lookaround < BOARDSIZE && matrix[rookx][rooky+lookaround]==1){

			matrix[rookx][rooky+lookaround] = 8;
			matrix[rookx][rooky] =0;
			break;
		}
		else if(rookx - lookaround >=0 && matrix[rookx-lookaround][rooky]==1){

			matrix[rookx-lookaround][rooky] = 8;
			matrix[rookx][rooky] =0;
			break;
		}
		else if(rookx + lookaround < BOARDSIZE && matrix[rookx+lookaround][rooky]==1){

			matrix[rookx+lookaround][rooky] = 8;
			matrix[rookx][rooky] =0;
			break;
		}
		else if(lookaround > 7)
		{
			break;
		}
		else
		{
			lookaround +=1;
		}

	}

	print_matrix(BOARDSIZE, BOARDSIZE, matrix);

	return 0;
}
