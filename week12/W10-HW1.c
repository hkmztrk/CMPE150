#include <stdio.h>
#include <stdlib.h>


void read_arr(int arr[], int L){
	int i;
	for(i=0; i <L; i++){
		scanf("%d", &arr[i]);
	}
}

void print_arr(int arr[], int L){
	int i;
	for(i=0; i <L; i++){
		printf("%d ", arr[i]);
		}
}

/* use of const means that the array you defined will not be changed*/
void copy_arr(const int arr1[], int arr2[], int L){
	int i;
	for (i=0; i < L; i++){
		arr2[i] = arr1[i];
	}
}

void invert_arr(int arr1[], int L){

	int i;

	for(i=0; i < L/2; i++){
		int temp = arr1[i];
		arr1[i] = arr1[L-i-1];
		arr1[L-i-1] = temp;

	}
}

int main(void){

	int N;
	scanf("%d", &N);

	int myarr[N], myarr2[N];
	read_arr(myarr, N);
	invert(myarr, N);
	copy_arr(myarr, myarr2, N);
	print_arr(myarr2, N);




	return 0;
}
