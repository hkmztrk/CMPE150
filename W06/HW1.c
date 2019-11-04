#include <stdio.h>

int main()
{
    int num, sum=0;
    scanf("%d", &num);
    
    while(num>0){
        sum +=num;
        scanf("%d", &num);
    }

    printf("%d", sum);
    return 0;
}
