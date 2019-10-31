// Program to calculate the sum of a maximum of 10 numbers
// If a negative number is entered, the loop terminates


# include <stdio.h>
int main()
{
    int i;
    float number, sum = 0;
    for(i=1; i <= 10; ++i){

        scanf("%f",&num);

        if(num < 0) {
            break;  // breaks from for loop
        }

        sum += num; 
    }

    printf("%.2f",sum);
    
    return 0;
}