/*
Write a program to check vowel or consonant:

  input: 9 
  output: is not alphabet

  input: a
  output: vowel

  input: b
  output: consonant

 */

#include <stdio.h>

int main(void){
   char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        /* Condition for consonant */
        printf("'%c' is consonant.", ch);
    }
    else 
    {
        /*
         * If it is neither vowel nor consonant
         * then it is not an alphabet.
         */
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;

}
