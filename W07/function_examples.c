#include <stdio.h>
#include <stdlib.h>

//// version1
void isPrime_void(int sayi){

	int i;
	int flag = 1;

	for(i=2; i <sayi; i++){
		if(sayi % i ==0){
			flag = 0;
			break;
		}
	}

	printf("%d", flag);
}

//// version2
void isPrime_void_noparams(){

	int i, sayi;
	int flag = 1;
	scanf("%d", &sayi);

	for(i=2; i <sayi; i++){
		if(sayi % i ==0){
			flag = 0;
			break;
		}
	}

	printf("%d", flag);
}


//// version3
  int isPrime_int(int sayi){

	int i;
	int flag = 1;

	for(i=2; i <sayi; i++){
		if(sayi % i ==0){
			flag = 0;
			break;
		}
	}

	return flag;
}



int main(void) {

	int num;
	scanf("%d", &num);

	//version1 call
	isPrime_void(num);

	//version2 call
	isPrime_void_noparams();

	//version3 call
	printf("%d", isPrime_int(num));


	return 0;
}








