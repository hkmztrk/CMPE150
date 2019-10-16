#include <stdio.h>
#include <stdlib.h>


int main(void) {

   char ch1;
   scanf("%c", &ch1);

   if( (ch1>= 'a') && (ch1 <= 'z')){ // we make sure that the character is between 'a' and 'z', and thus a lower case char
	   printf("%c", ch1 - ('a' - 'A'));  // 'a' - 'A' is equal to the difference between every lower and upper case pair
   }
   else if((ch1>= 'A') && (ch1 <= 'Z') ){
	   printf("%c", ch1 + ('a' - 'A'));
   }
   else if((ch1>= '0') && (ch1 <= '9') ){
	   printf("digit");
   }
   else{
	   printf("symbol");
   }



	return 0;
}



