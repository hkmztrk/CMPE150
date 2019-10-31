#include <stdio.h>
#include <stdlib.h>


int main(void) {



	char a, b;
		scanf("%c %c", &a, &b);
		char tempa=a, tempb=b;

		if(a >= b)
		{
			while(a>=b){
				if(a!= 'a' && a!= 'e' && a!= 'i' && a!= 'o' && a!= 'u'){
					printf("%c ", a);
				}
				a--;
			}
		}
		else{

			while(a <= b){
				if(a!= 'a' && a!= 'e' && a!= 'i' && a!= 'o' && a!= 'u'){
					printf("%c ", a);
				}
				a++;
			}
		}

		printf("\n a=%c, b= %c ", a, b);

		return 0;
}

