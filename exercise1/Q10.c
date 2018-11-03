#include<stdio.h>
int main()
{
  int dayOfYear = 0;
  scanf("%d",&dayOfYear);
  
  int modulo = dayOfYear % 7;
  switch(modulo)
  {
    case 0 :
    {
      printf("Saturday\n");
      break;
    }
    case 1 :
    {
      printf("Sunday\n");
      break;
    }
    case 2 :
    {
      printf("Monday\n");
      break;
    }
    case 3 :
    {
      printf("Tuesday\n");
      break;
    }
    case 4 :
    {
      printf("Wednesday\n");
      break;
    }
    case 5 :
    {
      printf("Thursday\n");
      break;
    }
    case 6 :
    {
      printf("Friday\n");
      break;
    }
    
  }
  
  return 0;
}