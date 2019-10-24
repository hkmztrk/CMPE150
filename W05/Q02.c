#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int degree;
	char symbol;

	scanf("%c %d", &symbol, &degree);

	if (symbol == 'F' || symbol == 'C'){

		if (symbol == 'F'){ // here I convert Fahrenheit degree to Celcius first
		   degree = (degree - 32) * 5 / 9;
		}

		if(degree < 21){
			printf("cold");
		}
		else if(degree >= 21 && degree <= 25){
			printf("warm");
		}
		else if (degree > 25){
			printf("hot");
		}


	}
	else{

		printf("incorrect input.");

	}


	return 0;
}



