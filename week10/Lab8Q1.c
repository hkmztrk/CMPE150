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
 * remove_arr is a (int) function because question wants
 * us to RETURN an integer value.
 */
int remove_arr(int arr1[], int arr2[], int N, int M){
	int i, j, newSize=0;
	int temp[N]; //we choose the size of temp arr
				//similar to the size of the first arr

	for(i=0; i < N; i++){
		int flag =0;
		for(j=0; j < M; j++){
			if(arr1[i] == arr2[j]){
				flag = 1;
			}
		}
		if(flag!=1)
			temp[newSize++] = arr1[i];
	}

	int k;
	for(k=0; k <newSize; k++)
		arr1[k] = temp[k];

	return newSize;
}

int main(void)
{

	int N, M;
	scanf("%d%d", &N, &M);
	int arr1[N], arr2[M];
	read_array(arr1, N);
	read_array(arr2, M);
	int updatedsize = remove_arr(arr1, arr2, N, M);
	//printf("%d", updatedsize);
	print_array(arr1, updatedsize);




	return 0;
}
