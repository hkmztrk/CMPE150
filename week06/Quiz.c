#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	char ch, prev_ch;
	scanf("%c", &prev_ch);
	printf("%c", prev_ch);
	scanf("%c", &ch);
  
	while((prev_ch>'9' || prev_ch<'0') || (ch>'9' || ch<'0')){
		printf("%c", ch);	
		prev_ch = ch;
		scanf("%c", &ch);
	}
  
  /* Solution 2 */
  
  /*
  char ch, prev_ch;
	scanf("%c", &ch);
	printf("%c", ch);
	scanf("%c", &ch);
  
	while(1){
  
		if( (ch>='0' && ch<='9') && (prev_ch>='0' && prev_ch<='9') )
			break;
      
		printf("%c", ch);
		prev_ch = ch;
		scanf("%c", &ch); */
	
	return 0;
}
