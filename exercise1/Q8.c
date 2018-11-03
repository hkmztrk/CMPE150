#include <stdio.h>

int main()
{

	  int num_of_held,num_of_atten;

	  scanf("%d %d",&num_of_held, &num_of_atten);
	  float per = (num_of_atten/(float)num_of_held)*100;
	  printf("You have attended %f of total classes\n",per);
	  if(per>=75){
	    printf("allowed %1.f %% \n", per);
	  }
	  else{
	    printf("not allowed %.1f %%\n", per);
	  }
	  return 0;

}