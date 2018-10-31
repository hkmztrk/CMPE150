
#include <stdio.h>


int main() {


 int i=1, z=1, n;
 scanf("%d",&n);

 while(i <= n)
 {
	 while(z <=i)
	 {
		 printf("*");
		 z++;
	 }
	 printf("\n");
	 i++;
	 z = 1;
 }





	return 0;
}
