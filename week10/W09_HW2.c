#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, N, sum=0;
	scanf("%d", &N);

	int arr[N];
	for (i=0; i <N; i++)
		scanf("%d", &arr[i]);

	for (i=0; i < N; i++){
		int res= arr[i] - i;
		if(arr[i] < i)
			res *= -1;
		sum += res;

	}

	printf("%d", sum);


	return 0;
}
