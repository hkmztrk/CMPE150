#include <stdio.h>
#include <stdlib.h>


// we are passing the arrays just like pointer parameters - by reference
void print_array(int arr1[], int N){
	int j;
	for(j=0; j <N; j++){
		   printf("%d", arr1[j]);
		}
}

void read_array(int arr1[], int N){
	int j;
	for(j=0; j <N; j++){
		   scanf("%d", &arr1[j]);
		}

}

int main(){
	int N=5;
	int arr1[N];

	/* since we are able to pass arrays as reference
	* we can see that read_array function modifies
	* the arr1 in main() function
	*/ 

	read_array(arr1, N);
	print_array(arr1, N);


	return 0;
}
