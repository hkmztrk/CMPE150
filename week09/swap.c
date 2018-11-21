
#include <stdio.h>

void swap(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int main(void){

	int x, y;
	scanf("%d %d", &x, &y);
	swap(&x, &y);

}
