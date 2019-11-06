#include <stdio.h>
#include <stdlib.h>


int main(int a, int b) {

	int i, num;
	int flag = 1;
	scanf("%d", &num);

	for(i=2; i <num; i++){
		if(num % i ==0){
			flag = 0;
			break;
		}
	}

	printf("%d", flag);
	
	printf();

	return 0;
}



