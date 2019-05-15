#include <stdio.h>
#include <stdlib.h>
#define BOARD 8

int main(void){

	int cboard[BOARD][BOARD];

	int i,j;

	for(i=0; i< BOARD; i++){
		for(j=0; j< BOARD; j++){
			scanf("%d", &cboard[i][j]);
		}
	}

	int rookx, rooky;

	for(i=0; i< BOARD; i++){
		for(j=0; j< BOARD; j++){
			if (cboard[i][j] == 8){
				rookx = i;
				rooky = j;
				break;
			}
		}
	}

	int lookaround = 1;

	while(1){

		if(rookx-lookaround >= 0 && cboard[rookx-lookaround][rooky]==1){

			cboard[rookx-lookaround][rooky] = 8;
			cboard[rookx][rooky] = 0;
			break;
		}
		else if(rookx+lookaround < BOARD && cboard[rookx+lookaround][rooky]==1){

				cboard[rookx+lookaround][rooky] = 8;
				cboard[rookx][rooky] = 0;
				break;
		}
		else if(rooky-lookaround >= 0 && cboard[rookx][rooky-lookaround]==1){

				cboard[rookx][rooky-lookaround] = 8;
				cboard[rookx][rooky] = 0;
				break;
			}
		else if(rooky+lookaround < BOARD && cboard[rookx][rooky+lookaround]==1){

					cboard[rookx][rooky+lookaround] = 8;
					cboard[rookx][rooky] = 0;
					break;
			}

		lookaround++;

		if(lookaround > BOARD-1)
			break;

	}

	for(i=0; i< BOARD; i++){
		for(j=0; j< BOARD; j++){
			printf("%d", cboard[i][j]);
		}
		printf("\n");
	}



	return 0;
}
