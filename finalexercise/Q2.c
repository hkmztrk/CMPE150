

#include<stdio.h>



int main(){

	int arr[100];
	int dir, i=0;
	scanf("%d", &dir);
	while(dir != 4){
		if(dir == 1){
			scanf("%d", &arr[i]);
			i++;
		}
		else if(dir==2){
			scanf("%d %d", &arr[i], &arr[i+1]);
			i+=2;
		}
		else if(dir==-1){
			i -=1;
		}
		else if(dir==3){
			int j, sum =0;
			for(j=0; j<i; j++){
				sum += arr[j];
			}
			arr[i++]=sum;

		}
		scanf("%d", &dir);
	}
	int j;
	for(j=0; j<i; j++)
		printf("%d ", arr[j]);

	return 0;
}
