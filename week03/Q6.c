/*
Write a program that reads the grade (0-100) of a student, then prints out:
  "A" if it is greater than or equal to 90, 
  "B" if its between 90 - 80, 
  "C" if its between 80 - 60, 
  "D" if its between 60 - 40,
  "F" otherwise. 

 */

#include <stdio.h>

int main(void){

    int gr;
    scanf("%d", &gr);
    

    if(gr <= 100 && gr >= 90)
   	 printf("A");
    else if(gr < 90 && gr >= 80)
        printf("B");
    else if(gr <80 &&  gr>= 60)
        printf("C");
    else if(gr <60 &&  gr>= 40)
        printf("D");
    else if (gr > 100)
   	 printf("No grades bigger than 100 are allowed.");
    else
        printf("F");

}
