#include <stdio.h>
#include <stdlib.h>

void printAsTime(int h, int m, int s){
	// Alternative 1
	//printf("%.2d:%.2d:%.2d", h, m, s);

	// Alternative 2
	if(h < 10)
		printf("0");
	printf("%d:", h);

	if(m < 10)
		printf("0");
	printf("%d:", m);

	if(s < 10)
		printf("0");
	printf("%d", s);
}

int main(void)
{

	int hour, min, sec;
	scanf("%d%d%d", &hour, &min, &sec);

	printAsTime(hour, min, sec);



	return 0;
}

