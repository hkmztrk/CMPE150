
#include <stdio.h>
#include <stdlib.h>


void read_arr(int ar[], int size){
	int i;
	for (i=0; i <size; i++)
		scanf("%d ", &ar[i]);

}


void print_arr(int ar[], int size){
	int i;
	for (i=0; i <size; i++)
		printf("%d ", ar[i]);

}

int main(void){

	int L;
	scanf("%d", &L);
	int myarr[L]  


	read_arr(myarr, L);
	print_arr(myarr, L);


	return 0;
}
