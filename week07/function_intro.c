#include <stdio.h>

/* global variable*/
int luckynum = 17;

/* void function with no return - no parameters*/
void my_lucky_number(){
	int luckynum = 9;

	printf("%d \n", luckynum);
}

/* void function with no return + with a parameter*/
void your_lucky_number(int luckynum){

	printf("%d \n", luckynum);
}

/* int function with return + with  parameters*/
int find_lucky_number(char c, int b){

	return (c+b);
}


int main(void){

	/* we used printf in void functions
	 * so we don't need to print anything again.
	 * we just call the function by name.
	 */
	my_lucky_number();
	your_lucky_number(luckynum);

	/* remember the global luckynum=17 above,
	 * below we create a new local variable with same name.
	 * from now, within this function (main)
	 * luckynum will become a local variable.
	 */
	int luckynum = 33;
	your_lucky_number(luckynum);

	char month;
	int day;
	scanf("%c %d", &month, &day);
	printf("%d \n", find_lucky_number(month, day));


return 0;
}
