#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>


int isPrime(int n);


int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        if (isPrime(i) == 1)
        {
            if (isPrime(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
           
            }
        }
    }


    return 0;
}

int isPrime(int n)
{
    int i, flag = 1;

    for(i = 2; i <= n/2; ++i){

        if(n % i == 0)
        {
        	flag = 0;
            break;
        }
    }

    return flag;
}

