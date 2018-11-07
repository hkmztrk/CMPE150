
#include <stdio.h>

int main() {


	int N, i,j;
	scanf("%d",&n);
  
  	int spaces = 3N - 4;

	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		printf("*");

		for(j=1;j<=spaces;j++){
			if(i!=n){
				printf(" ");
			}
			else{
				printf("*");
			}
		}

    		spaces -=2; 
		printf("*\n");
    
	}

	return 0;

}
