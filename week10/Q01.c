#include <stdio.h>
#include <stdlib.h>


int main(){

	int i, N;
	scanf("%d", &N);
    int arr1[N];

    for(i=0; i <N; i++)
    	scanf("%d", &arr1[i]);

    int L, H;
    scanf("%d%d", &L, &H);

    if(H < L){
    	int temp = L;
    	L = H;
    	H = temp;
    }

    int max = arr1[L] ;
    for(i=L; i <=H; i++){
    	if(arr1[i] > max){
    		max = arr1[i];
    	}
    }

    printf("%d", max);


	return 0;
}
