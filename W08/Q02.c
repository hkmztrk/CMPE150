#include <stdio.h>
#include <stdlib.h>



int factorial(int p){
	int i, res = 1;

	for(i=2; i <=p ;i++){
		res *=i;
	}

	return res;
}

int fact_sum(int sayi){

	int fact_sum = 0;

	while(sayi > 0){

		int ld = sayi % 10;
		fact_sum += factorial(ld);

		sayi = sayi / 10;

	}
	return fact_sum;

}



int main(void) {

	int sayi;
	int fact_sum = 0;

	scanf("%d", &sayi);


	printf("%d", fact_sum);

	return 0;
}









