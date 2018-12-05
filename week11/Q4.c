#include <stdio.h>

void read_arr(int ar[], int size)
{  
	int i;
	for (i=0; i<size; i++)
		scanf("%d",&ar[i]);
}

void print_arr(int ar[], int size)
{  
	int i;
	for (i=0; i<size; i++)
		printf("%d",ar[i]);
}

void swap(int *a, int *b)
{  
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int ar[], int size)
{  
	int i, j;

	for (i = 0; i < size; i++){

		for (j = i + 1; j < size;j++){
			if (ar[i] > ar[j]){

				swap(&ar[i],&ar[j]);
			}
			
		}
	}

}

int main()
{  
	int L;
	scanf("%d", &L);
	int myarr[L];


	read_arr(myarr,L);
	bubble_sort(myarr,L);
	print_arr(myarr,L);


	return 0;
}