#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int x, y, z;

	scanf("%d%d%d", &x, &y, &z);

	int old_x =x, old_y =y, old_z =z;
	// these variables keep the original values of x, y, z

    x = (x + y) * z
    y = (old_x * z*z) + y
    z = (z * 3 + old_y) - old_x

	printf("%d %d %d", x, y, z);

	return 0;
}



