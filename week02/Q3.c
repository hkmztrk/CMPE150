/* Write a program which reads a lower-case char (character) from the user,
   then prints its upper-case version on the screen. 
  
   e.g. 
   input: a
   output: A */
   
   
#include <stdio.h>

int main(void){

	char ch;
	scanf("%c", &ch);
  
  int diff = 'a' - 'A';  // find the difference between a random pair of lower case and upper case
	printf("Result is: %c, %d", ch-diff, ch-diff); // minus the difference to the current lower case

   return 0;
}
