#include <stdio.h>

int main()
{

int digt,num,num_digits=0,temp,sum=0;

    scanf("%d",&num);

    // we save the num we read from user in a temporary variable
    // because we will need num again after updating its value in the following operations
    
    temp=num;
    //for counting the number of digits in number
    while(temp>0){
            temp=temp/10;
            num_digits++;
    }
    temp = num;
    
    // now we compute e.g. 1^3 + 5^3 + 3^3 
    while(num>0){
            digt=num%10;
            sum=sum+pow(digt,num_digits);
            num=num/10;
    }
    if(sum==temp)
              printf("Number is Narcissistic");
    else
          printf("Number is not Narcissistic");
 
}