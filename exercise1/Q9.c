#include<stdio.h>
int main()
{
  int num1=0,num2=0,num3=0;
  scanf("%d,%d,%d",&num1,&num2,&num3);
  
  if(num1*2 == num2+num3)
  {
    printf("%d is mean of %d and %d \n",num1,num2,num3);
  }
  else if(num2*2 == num1+num3)
  {
    printf("%d is mean of %d and %d \n",num2,num1,num3);
  }
  else if(num3*2 == num1+num2)
  {
    printf("%d is mean of %d and %d \n",num3,num1,num2);
  }
  else
  {
    printf("No number is mean of the other two\n");
  }
  
  return 0;
}