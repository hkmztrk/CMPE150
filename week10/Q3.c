#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>



int main(void) {

char  ch, sentence[50];

scanf("%c", &ch);
int i=0;
while(ch!='\n'){
	sentence[i] = ch+1;
	scanf("%c", &ch);
	i++;
}
int j;
for(j=0; j <i; j++)
	printf("%c", sentence[j]);
printf("\n");
for(j=0; j <i; j++)
	printf("%c", sentence[j]-1);


return 0;
}
