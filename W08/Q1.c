#include <stdio.h>
#include <stdlib.h>

char myFunc(int N){
	//char result;
	int i,sum=0;
	for (i=1; i<N; i++){
		if (N%i==0){
			sum=sum+i;
		}
	}
	if (sum==N){
		return 'T';
	}

		return 'F';
}



int main(void) {
	int n;
	scanf ("%d", &n);
	printf("%c",myFunc(n));




	return 0;
}









