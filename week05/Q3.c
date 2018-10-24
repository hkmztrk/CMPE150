
#include <stdio.h>


int main() {

   char key;

   while(1) {
      scanf("%c", &key);

      // if E or e, exit
      if (key == 'E' ||  key == 'e')
          break;
   }

	return 0;
}