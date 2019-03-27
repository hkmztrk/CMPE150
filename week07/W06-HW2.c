#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	  int N, row, col;
	  scanf("%d", &N);

	  for (row=1; row<=N; row++ ){

	    for(col=1; col<=N; col++ ){

	      if (row<=N/2 && col<=N/2)
	        printf("*");
	      else if (row<=N/2)
	        printf(".");
	      else if (col<=N/2)
	        printf("$");
	      else
	        printf("o");
	    }
	    printf("\n");
	  }


}

