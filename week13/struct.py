#include <stdio.h>
#include <stdlib.h>

struct Point{
	int x;
	int y;
	char code;
};

int main(void){

	struct Point p1;

	scanf("%d%d", &p1.x, &p1.y);
	printf("%d %d", p1.x, p1.y);


	return 0;
}
