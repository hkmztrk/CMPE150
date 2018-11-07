#include <stdio.h>


int main(void){

	char c;
	int pass;

	scanf("%c %d", &c, &pass);

	float total_fare;
	if(c == 'S'  || c == 's'){

		if(pass == 1){
			total_fare = 1.25;
		}
		else if(pass == 2){
			total_fare = 1.25 + 0.55;
		}
		else if(pass == 3){
			total_fare = 1.25 + 0.55+ 0.50;
		}
		else if(pass >= 4){
			total_fare = 1.25 + 0.55+ 0.50 + (pass-3)*0.45;
		}

	}
	else if(c == 'R'  || c == 'r'){
		if(pass == 1){
			total_fare = 2.60;
		}
		else if(pass == 2){
			total_fare = 2.60 + 1.85;
		}
		else if(pass == 3){
			total_fare = 2.60 + 1.85 + 1.40;
		}
		else if(pass >= 4){
			total_fare = 2.60 + 1.85 + 1.40 + (pass-3)*0.90;
		}
	}

	printf("%.2f", total_fare);

return 0;
}
