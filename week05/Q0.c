/*
  Write a program to read two numbers and display the following menu.
          MENU
    a. Summation
    b. Sum of squares
    c. Sum of cubes
    d. Product

    o/w: Wrong choice!
  And perform tasks as per user's choice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
  int a, b, res=0;
  char choice;

  scanf("%d %d %c", &a, &b, &choice);

  switch(choice) {
    case 'a': 
      res= a + b;
      break;
    case 'b': 
      res = pow(a, 2) + pow(b, 2);
      break;
    case 'c': 
      res = pow(a, 3) + pow(b, 3);
      break;
    case 'd': 
      res = a * b;
      break;
    default: 
      printf("\nWrong choice");
  }
      printf("%d", res);
}