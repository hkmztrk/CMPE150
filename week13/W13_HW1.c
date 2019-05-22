/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Book{
	char name[3];
	int pagecount;
	int price;
};


void sort_print(struct Book lib[], int size){
	int i, j;
	struct Book temp;

	for(i=0; i < size; i++){
		for(j=i+1; j < size; j++)
		{
			if(lib[i].price > lib[j].price){
				temp = lib[i];
				lib[i] = lib[j];
				lib[j] = temp;
			}
		}
	}

	for(i=0; i <size; i++){
		printf("%d %s %d \n", i, lib[i].name, lib[i].pagecount);
	}

}

int main(void){

	int N;
	scanf("%d", &N);

	struct Book library[N];
	int i;
	for(i=0; i <N; i++){
		scanf("%s %d %d", &library[i].name, &library[i].pagecount, &library[i].price);
	}

	sort_print(library, N);


	return 0;
}
