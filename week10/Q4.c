#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>



int main(void) {

int N,i, arr[50];

scanf("%d", &N);
int el;
for (i=1; i<=N; i++){
	scanf("%d", &el);
	arr[i-1] = el;
}

for(i=N; i>=1; i--){
	printf("%d ", arr[i-1]);
}


return 0;
}
