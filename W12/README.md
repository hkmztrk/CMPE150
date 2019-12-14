## W12 // 11.12.2019

Strings or just char arrays.

#### How to declare?
char string1[] = {'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
Do not forget to put the first character as \0.

char string1[] = "Welcome";
This is equivalent to the above statement. Double quote puts the first character itself.

    for (i = 0; string1[i] != '\0'; i ++) {
      printf("%c ", string1[i]);
    }

You can also print number of the characters from {0 - 255}.

    for (i = 0; string1[i] != '\0'; i ++) {
      printf("%c (%i) ", string1[i], string1[i]);
    }
    
Little insteresting thing.
As you realize, we put a string inside "printf" function.
You can declare this string before the "printf" and give this string to "printf".

    char print[] = "%i %.2f %c\n";
    printf(print, 4, 5.25, 'e');
    printf(print, 5, 7.25, 'f');
    
#### How to read from the console?
Char by char... Do not forget that, spaces and pressing enter (new line character, \n) counts as a character, too.

    int n;
    scanf("%i ", &n);
    char string2[n + 1];
    for (i = 0; i < n; i ++) {
      scanf("%c", &string2[i]);
    }
    string2[n] = '\0';

    for (i = 0; string2[i] != '\0'; i ++) {
      printf("%c", string2[i]);
    }
    
Or you can read and print a word. Do not forget that any space or pressing enter (new line character, \n) finishes reading.
    
    char string3[100];  // Or you can put n here and read the size from the console.
    scanf("%s", &string3);
    printf("%s", string3);
    return 0;
    
Or you can use built-in functions.
"gets" function fills the given char array with your input and it does not put the first character \0.
"fgets" function reads 9 characters in the example and puts a \0 to the end.
Parameter 10 might be smaller then 10 for example 7. At that point, it will read only 6 characters and put a \0 to the end.
Both functions can read space character.
"puts" function prints the given string.
It is better to select one of these read and write operations from the options and get used to it.

    char string4[10];
    // gets(string4);
    fgets(string4, 10, stdin);
    puts(string4);

### Q1
Read integer n, integer k and char c.  
Then, read a n-sized string (char array).  
Send string, k and c to a function.  
In the function, count and return how many times character c appears in the string.  
And whenever you see a character c in the string, add k to that character c.  

    Input:
    12 6 c
    caabcacbbcac
    Output:
    5
    iaabiaibbiai

    Input:
    16 -3 d
    fhdgaehbacfddea
    Output:
    3
    fhagaehbacfaaea

### Q2
Read integer n as the size of string and read character c.  
Then, read a n-sized string (char array).  
Create a new string and fill it with the characters of old string.  
But, do not copy characters c (delete them).  
Realize that, size of the new string will be shorter than old string.  
Print the new string.  
Print size of the new string.  

    Input:
    7 a
    aabcaba
    Output:
    bcb
    3

    Input:
    14 a
    bcabcaabccbaba
    Output:
    bcbcbccbb
    9
