
#include <stdio.h>
#include <stdlib.h>

int main(void){

 int i, j, a1L,a2L;
 scanf("%d %d", &a1L, &a2L);
 int arr1[a1L], arr2[a2L];


for(j=0; j <a1L; j++ ){
	scanf("%d", &arr1[j]);
}

for(j=0; j <a2L; j++ ){
	scanf("%d", &arr2[j]);
}

int  m, flag=1;

for(i=0; i <a2L; i++){

	if(arr1[0] == arr2[i])
	{
		 for(m=0; m <a1L; m++){

				if(arr1[m]==arr2[m+i]){
					flag++;
				}
			}

	}
	if(flag==a1L){
		printf("%d", i );
		break;
	}
	else flag =0;

}


	return 0;
}
