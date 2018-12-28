#include<stdio.h>

struct House{
	int number;
	int area;
	int price;
};

int main(){

	int i, N, max=-100;
	scanf("%d", &N);
	struct House Houses[N];
	struct House expensive;

	for(i=0; i <N; i++){
		Houses[i].number = i+1;
		scanf("%d %d", &Houses[i].area, &Houses[i].price);
	}

	for(i=0; i < N; i++){
		if(Houses[i].area * Houses[i].price > max){
			expensive.number = Houses[i].number;
			expensive.area = Houses[i].area;
			expensive.price = Houses[i].price;
		}
	}

	printf("Expensive: \n Number: %d \n Area: %d \n Price: %d",
				expensive.number, expensive.area, expensive.price);



	return 0;
}
