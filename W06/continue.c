// Program to calculate the sum of a maximum of 10 numbers
// Negative numbers are skipped from the calculation

# include <stdio.h>
int main()
{
    int i;
    float num, sum = 0;
    for(i=1; i <= 10; ++i)
    {
        scanf("%f",&num);

        if(number < 0){
            continue;  // skips the rest if number is < 0
        }

        sum += num; 
    }
    printf("%.2f",sum);
    
    return 0;
}