#include <stdio.h>
#include <stdlib.h>


int main(){

	int i,N ;
	scanf("%d", &N);
	int arr[N];

	for(i=0; i <N; i++){
		scanf("%d", &arr[i]);
	}

	for(i=N-1; i >=0; i--){
			printf("%d", arr[i]);
		}


	return 0;
}
