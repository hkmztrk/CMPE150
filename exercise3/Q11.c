#include <stdio.h>
#include <stdlib.h>

void print_z(int h){
	int i,j;

	for(i=1; i <=h; i++){
		for (j=1; j <= h; j++){
			if(i==1 || i==h || i== h-j+1)
				printf("X");
			else
				printf("_");
		}
		printf("\n");
	}
}


int main() {

	print_z(6);

}