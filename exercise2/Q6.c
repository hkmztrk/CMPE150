#include <stdio.h>

int main()
{

 int N,i,j;
 scanf("%d", &N);
 
 for (i=1; i <= N; i++){
      for(j=1; j <= N-i+1; j++){
          printf("%d ", j);
      }
      printf("\n");
 }
 
}