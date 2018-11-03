#include <stdio.h>

int main()
{

	int ndays, y, m, d;


	scanf("%d", &ndays);

	y = (int) ndays/365;

	ndays = ndays-(365*y);

	m = (int)ndays/30;

	d = (int)ndays-(m*30);

	printf("Year %d, Month  %d, Day %d ", y, m, d);
	return 0;
}
