
#include <stdio.h>
#include <stdlib.h>


int main(void) {

  char schar, echar;
  scanf("%c%c", &schar, &echar);
  int i;

  if(schar < echar){
	  for(i=schar; i <= echar; i++){
		  if(i=='a' || i=='e' || i=='i' || i=='o'
				  || i=='u' ){
			  continue;
		  }
		  printf("%c",i);
	  }
  }
  else{
	 for(i=schar; i >= echar; i--){
	   if(i !='a' && i!='e' && i!='i' && i !='o'
					  && i!='u' ){

		   printf("%c",i);
	   }

		  }

  }

	return 0;
}
