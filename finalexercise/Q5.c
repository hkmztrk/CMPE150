#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>




int main(void) {

	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int M, i, j;
	scanf("%d", &M);
	int temp[10];

	if(M< 0){
		i=0;
		for(j=0; j < (M*-1); j++){
			temp[i++] = arr[10+M+j];
		}
		for(j=0; j < 10+M; j++){
			temp[i++] = arr[j];
		}

	}
	else if(M > 0){
		i =0;

		for (j=M; j < 10; j++){
			temp[i++] = arr[j];
		}
		for(j=0; j < M; j++){
			temp[i++] = arr[j];
		}

	}


	for(i=0; i < 10; i++)
		printf("%d ", temp[i]);

	return 0;
}
