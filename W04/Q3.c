#include <stdio.h>
#include <stdlib.h>


int main(void) {

   char ch1;
   scanf("%c", &ch1);


   if((ch1>= '0') && (ch1 <= '9') ){
	   printf("%d", (ch1 - '0') * 2); // Here the difference between the ASCII number of ch1 and '0' gives 
   }                                  // us the integer value of ch1
   else                               // ASCII '0' : 48, ASCII '4' : 52 ->>> 52 - 48 = 4
   {
	   printf("error");
   }

	return 0;
}



