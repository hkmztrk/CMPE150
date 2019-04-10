#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){

	int arr[SIZE];
	int i;

	for(i=0; i <SIZE; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[0], min = arr[0];

	for(i=0; i <SIZE; i++){

		if(arr[i]> max)
			max = arr[i];

		if(arr[i] < min)
			min = arr[i];

	}

	printf("Max:%d, Min:%d", max, min);


	return 0;
}
