#include <stdio.h>
#define PI 3.14

int main(void){

	float volume, r;
	scanf("%f", &r);

	volume = (4.0/3.0) * PI * r * r * r;
	printf("Volume is %f",volume );


	return 0;
}
