#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

struct square {
	struct point p;
	int length;
};

int area(struct square mySquare) {
	return mySquare.length * mySquare.length;
}

int perimeter(struct square mySquare) {
	return mySquare.length * 4;
}

struct point right_down(struct square mySquare) {
	struct point p;
	p.x = mySquare.p.x + mySquare.length;
	p.y = mySquare.p.y - mySquare.length;
	return p;
}

int main(void) {

	struct point p;
	struct square mySquare;

	scanf("%i %i %i", &p.x, &p.y, &mySquare.length);
	mySquare.p = p;

	printf("%i %i %i\n", mySquare.p.x, mySquare.p.y, mySquare.length);

	printf("Area: %i Perimeter: %i\n", area(mySquare), perimeter(mySquare));

	struct point p_right_down = right_down(mySquare);

	printf("Right Down: %i %i", p_right_down.x, p_right_down.y);

	return 0;
}
