#include <stdio.h>
#include <stdlib.h>

int pow(int a, int N){
	int i, sum=1;
	for(i=1; i <=N; i++){
		sum *= a;
	}
	return sum;
}




int decimalToBinary(int num){
	int counter=0, sum =0;

	while(num > 0){
		int lastdigit = num %2;
		counter++;
		sum += lastdigit * pow(10, counter-1);
		num /=2;
	}
	return sum;
}
int main(){
	int number;
	scanf("%d", &number);

	printf("%d", decimalToBinary(number));
	return 0;
}
