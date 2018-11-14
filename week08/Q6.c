#include <stdio.h>

int printTriangle(int number){
	int i,j;

	for (i=1; i <=number; i++){
		for (j=1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}


int main(void){

	int num;
	scanf("%d", &num);

	printTriangle(num);

}
