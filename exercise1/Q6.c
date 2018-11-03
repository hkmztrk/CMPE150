#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);


    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("exactly divisible by 5 and 11");
    }
    else if((num % 5 == 0) && !(num % 11 == 0))
    {
        printf("exactly divisible by 5 but not by 11");
    }
    else if(!(num % 5 == 0) && (num % 11 == 0))
    {
        printf("exactly divisible by 11 but not by 5");
    }
    else
    {
        printf("not divisible by either");
    }

    return 0;
}