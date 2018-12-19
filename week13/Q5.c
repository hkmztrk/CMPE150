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
		for(j=i; j < size; j++)
		{
			if(lib[i].pagecount > lib[j].pagecount){
				temp = lib[i];
				lib[i] = lib[j];
				lib[j] = temp;
			}
		}
	}

	for(i=0; i <size; i++){
		printf("%d %s %d", i, &lib[i].name, &lib[i].pagecount);
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
