
#include <stdio.h>

void lucky_number(int num){
	num++;
	printf("%d \n", num);
}

void luckier_number(int *num){
	(*num)++;
	printf("%d \n", *num);
}

int main(void){

 int a = 10;
 printf("a before lucky_number() %d \n", a);
 lucky_number(a);
 printf("a before luckier_number() %d \n", a);
 luckier_number(&a);
 printf("a after luckier_number() %d \n", a);

}
