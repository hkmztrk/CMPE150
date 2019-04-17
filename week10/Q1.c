#include <stdio.h>
#include <stdlib.h>


int main(){

	int i, j, N, M;
	scanf("%d%d", &N, &M);
	int arr1[N];
	int arr2[M];

	for(j=0; j <N; j++){
	   scanf("%d", &arr1[j]);
	}
	for(j=0; j <M; j++){
	   scanf("%d", &arr2[j]);
	}

	int counter =0;
	for(i=0; i <M; i++){


		if(arr2[i] == arr1[0])
		{
			for(j=1; j < N; j++){

				if(arr1[j] == arr2[j + i]){
					counter++;
				}
			}
		}

		if(counter == N-1){
			printf("%d", i);
			break;
		}
		else counter=0;
	}




	return 0;
}
