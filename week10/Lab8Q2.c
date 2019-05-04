#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

// we are passing the arrays just like pointer parameters - by reference
void print_array(int arr1[], int N){
	int j;
	for(j=0; j <N; j++){
		   printf("%d ", arr1[j]);
		}
}

void read_array(int arr1[], int N){
	int j;
	for(j=0; j <N; j++){
		   scanf("%d", &arr1[j]);
		}

}

/* Be careful about the type of the function!!!
 * merge is a (void) function because question simply
 * requires the content of arr3[], which we passed as a reference!
 */
void merge(int arr1[], int arr2[], int arr3[], int N, int M){
	int i=0,j=0, p=0;

	while(i <N && j < M){ // I'm checking indices of both arrays in turn
		if(arr1[i] < arr2[j]){
			arr3[p++] = arr1[i++];
		}
		else{
			arr3[p++] = arr2[j++];
		}
	}

	while(i < N)
		arr3[p++] = arr1[i++];
	while(j < M)
		arr3[p++] = arr2[j++];

}

int main(void)
{

	int N, M;
	scanf("%d%d", &N, &M);
	int arr1[N], arr2[M], arr3[N+M];
	read_array(arr1, N);
	read_array(arr2, M);
	merge(arr1, arr2, arr3, N, M);
	print_array(arr3, N+M);





	return 0;
}
