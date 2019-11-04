#include <stdio.h>

int main()
{
    int num, i, sum=0;
    scanf("%d", &num);
    
    while(num>0){
       int last_digit = num % 10; // here we find the individual integers
                                  // e.g. 24 -> 2 and 4
       int factorial = 1;
       
       for(i=2; i <=last_digit; i++)
            factorial *= i;
            
        sum += factorial;
        
        num = num /10; // e.g 24 becomes  2, 789 becomes 78 and so on..
        
       
    }

    printf("%d", sum);
    return 0;
}