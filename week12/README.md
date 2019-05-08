
## W12 // 08.05.2019

### Q0.1

Write a function that takes a character array, and an integer specifying the size of the array as parameters. Your function should sort each word separately.

    Note: The words are separated by only one space character (' ').
    Assume: The array consists of only lowercase letters and space characters. 

    INPUT:	input deneme basit							
    OUTPUT:   inptu deeemn abist
				
```c                
 int main() 
{ 
    char arr[100], temp;
    int n = 0;
    scanf("%c", &temp);
    while(temp != '\n' && temp != '\r'){
        arr[n++] = temp;
        scanf("%c", &temp);
    }
    sort(arr, n);
    printArray(arr, n); 
    return 0; 
}
```


## STRINGS

<img src="W12_01.png" style="width:80%">

### Input + Output Operations

#### printf scanf %s
```c
	char magicword[50];
	scanf("%s", magicword);
	printf("%s", magicword);
	printf("%d", strLen(magicword));
```

#### gets puts
```c
	char magicword[50];
	gets(magicword);
	puts(magicword);
	printf("%d", strLen(magicword));
```

#### sscanf
```c
	char str[100],name[20],surname[20];
	int age;
	// Write name surname age
	gets(str);
	sscanf(str, "%s %s %d", name, surname, &age);
	printf("Name: %s Surname: %s Age: %d", name, surname, age);
```


### Q1

Write a function named **strComp** which compares two strings (takes two char arrays as parameters):

    returns -1 if S1<S2
    returns =0 if S1==S2
    returns 1 if S1>S2
    For example "abc" < "abd", "dac" > "cbd", etc. 
    

### Q2


Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string. 

 In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one. 

        ---INPUT--- 
        aksam oldu huzunlendim ben yine
        3 

        ---OUTPUT--- 
        huzunlendim 


### Homework-1

Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case. 

        ---INPUT--- -
        merhaba dunyali nasilsin
        dunyali

        --OUTPUT--- 
        merhaba nasilsin 

