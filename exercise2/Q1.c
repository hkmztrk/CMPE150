#include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   
   while(N!=1){
       printf("%d ", N);
       if (N%2 ==0)
            N /=2;
        else
            N = N*3 +1;
        
   }
   printf("1");
}
