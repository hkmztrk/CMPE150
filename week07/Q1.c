/*
 * lab2.c
 *
 *  Created on: 3 Eki 2018
 *      Author: Hakimee
 */

#include <stdio.h>

int power_func(int a, int b){

	/* i and res are local variables
	 * and cannot be reached from main()
	 */

	int i, res = 1;

	for(i=1; i <= b; i++){
       res = res * a;
	}

	return res;
}

int main(void){

	/* we defined variables and read into them with scanf*/
	int n, n1;
	scanf("%d %d", &n, &n1);
	int result1 = power_func(n, n1);

	/* we defined variables with default values */
	int z=5, y=4;
	int result2 = power_func(z,y);

	/* we directly send integer arguments to function */
	int result3 = power_func(2,3);


	printf("%d %d %d", result1, result2, power_func(2,3) );


return 0;
}
