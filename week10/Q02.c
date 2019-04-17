#include <stdio.h>
#include <stdlib.h>


int charToKey(char X){
	if(X >= 'a' && X<= 'z'){
		return X - 'a' + 1;
	}
	else if(X >= 'A' && X<= 'Z'){
		return X - 'A' + 1;
	}
	else{
		return 0;
	}
}

int main(){

	int i=0;
	char arr1[50];

	scanf("%c", &arr1[0]);

	while(arr1[i]!= '\n'){
		scanf("%c", &arr1[++i]);
	}

	char key;
	scanf("%c", &key);
	int j;

	// Encrypt
	for(j=0; j <i; j++){
		arr1[j] = arr1[j] + charToKey(key);
	}

	// Printing the encrypted sentence
	for(j=0; j <i; j++){
		printf("%c", arr1[j]);
	}
	

	// Decrypt
	for(j=0; j <i; j++){
			arr1[j] = arr1[j] - charToKey(key);
		}

	// Printing the decrypted sentence
	for(j=0; j <i; j++){
		printf("%c", arr1[j]);
	}
	

	return 0;
}
