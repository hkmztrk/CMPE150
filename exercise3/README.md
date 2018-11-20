
# Exercises

## Functions & pointers

### Q1

Write two functions, divide and print_result. Function **divide()** takes two integers and returns a float value which is the division of the two parameters. In the main function this returned value is assigned to the variable **r**. 

Function **print_result()** takes a float parameter and prints it to the console using 2 decimal places. ("%.2f") 

    Assume: b will not be zero.
    In the main function, two integers are read from the user into the variables a and b. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 50 8      | 6.25 | 
| 45 100    | 0.45 | 



### Q2

Write a  function named **apply_operation**. It takes two floats and a character and returns a float value which is the summation of the two parameters if the character is a plus sign or the subtraction of the two parameters if the character is a minus sign. In the main function this returned value is printed to the console. 

    Assume: The character can only be a plus or a minus sign.



| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 6.51 - 4.59     | 1.92 | 
| 0.8 + 1.1    | 1.90  | 


### Q3


Write a function named **draw_upper_triangle**. It takes an integer (n) and a character (symbol) as parameters and prints an upper triangle of n lines using symbol characters.



        input: 4 *
        output:
         ****
          ***
           **
            * 
        input: 5 o 
        output:
         ooooo
          oooo
           ooo
            oo
             o 


### Q4

Write a function that takes an integer as input and computes its factorial.  Then write a program which reads an integer N. Then your program should read N more integers and print their factorial using factorial function.

 
     input: 5, 1 2 3 4 5
     output: 1 2 6 24 120  
 

     input: 7, 4 3 5 2 6 1 7 2 2 2 2 
     output: 24 6 120 2 720 1 5040  

### Q5

Write a program which reads an integer N. Then your program should read N more integers and print the completed sequence by filling the missing numbers between each entry.

Assume: User will not enter the same number twice without entering a different number. 
    
     input: 2, 1 10 
     output: 1 2 3 4 5 6 7 8 9 10 
     
     input: 2,  -1 -10 5 4 5 
     output: -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
     
     input: 4,  4 1 -3 5 
     output: 4 3 2 1 0 -1 -2 -3 -2 -1 0 1 2 3 4 5




### Q6

Write a function that will take an integer and reverse its last N digits. 

    input: 176, 2
    output: 167
    
    input: 63712, 3
    output: 63217


### Q7

Write a program to check whether an integer is the sum of two prime numbers of all possible combinations. 

Write and use the function **isPrime() ** which takes an integer as input, and returns:

        1 if the integer is prime, 
        0 otherwise.




### Q8


Write a function that takes a date of birth and current date in YYYY, MM and DD format (separated by spaces)  and calculates the age in years, months and days. 

Remember to check for leap years using a seperate function named **isleapYear()**. 


### Q9


Write a function named **removeDigit** which takes two parameters: an integer pointer (p), and an integer (x), respectively. The function should remove **x** digit (from the right) of the integer inside the address: **p** (divide the number to 10^x). 

The given main program reads two integers: number and digit. Then calls your function removeDigit. Send the address of the number, and the value of the digit to the function, respectively.  As a result, that much digit of the number from the right should be removed. The program prints the new version of the number to the screen. 


Assumptions/rules for input:

        •The number will always have more than digit digits.
        •The number and digit are positive.
        •digit is smaller than 10.


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 1923 1      | 192 | 
| 12453 3    | 12 | 
| 987654 5      | 9| 



### Q10


Write a function that reads a number from the user and finds the sum of first and last digit of the number. Your code should print the value of sum to the console. 

Assume that the number always have 2 or more digits. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
|2432      | 4| 
| 54213    | 8 | 
|30280      | 3| 
|42     | 6| 




### Q11

Write a program which reads an integer h from the user and prints a 'Z' with height h by using the upper-case **X** and **_** (i.e., underscore) characters. 

The lines of your Z will compose of the character X and the spaces between the lines will be represented by the _ character. 
If you look at the first example, you can observe followings:

    •The given input is 6 and the height of Z is also 6.
    •The lines of Z are composed of Xs.
    •The spaces of between lines is filled with _ characters.


    input: 6
    output:
    
          XXXXXX
          ____x_ 
          ___x__
          __x___
          _x____
          XXXXXX

### Q12

Write a function named **digitCount** which takes an integer number and an integer pointer digitNum. 

In the function, write the code to find how many digits does the number have and store the result in the address of **digitNum** parameter. Function does not need to return anything. 




### Q13

Write a function that takes an integer as input and returns:
    
        'T' if the integer is palindrome 
        'F' otherwise
 

### Note

We can pass a pointer value through two functions. Investigate the code below.


```python
#include <stdio.h>

void functionB( int *y )
{
  printf("    *y=%d\n", *y );
  *y = 999;
  printf("    *y=%d\n", *y );
}

void functionA( int *x )
{
  printf("  *x=%d\n", *x );
  functionB( x );         
 /* Note this!! 
  * functionB( x ): the parameter x contains a pointer to a.
  * functionB( &x ): would pass a pointer to x  
  * functionB( *x ): would pass the value in a , 77*/
    
  printf("  *x=%d\n", *x );
}

int main(void){
	  int a = 77;
	  printf("a=%d\n", a );
	  functionA( &a );
	  printf("a=%d\n", a );

	return 0;
}
```
