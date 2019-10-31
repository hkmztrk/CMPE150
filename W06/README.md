
# W06 Notes // 30.10.19

### Warm Up

### Q0.1

Write a program that reads two characters and displays from first character to second **excluding vowels**.

    input: c p
    output: c d f g h j k l m n p
    
    input: p c
    output: p n m l k j h g f d c

#### Continue and break

```c
#include <stdio.h>

int main(){			
    
    /* Continue */
    int i = 0;  
    while ( i <= 10) 
    {
        if (condition ) // do NOT forget the indendation, it makes your code readable
            continue;   // skips the rest of the code and continues the next iteration
        
        i +=1;
    } 
    
     /* Break */
    int i =0;
    while ( i <= 10) 
    {
        if (condition ) // do NOT forget the indendation, it makes your code readable
            break;   // terminates the loop and you are outside of while 
        
        i +=1;
    } 
}
 ```


 ### Q1
 Write a program which reads two integers N and M (both smaller than 15, greater than 1) 
 
     then prints a rectangle with size NxM which has stars (*) at borders, and lines (-) inside. 
     
     
        input: 3 3
        output:   ***
                  *-*
                  ***
        
        input:  4 8
        output:   ********
                  *------*
                  *------*
                  ********

### Q2

Write a program to read a character input in a loop. Print only numbers and  exit when pressed **e** or **E**.

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
|    a8bc!ge  | 8 | 
|    xyzzz123xttE | 123  | 
|    xyz1e2rr3xttE | 1  | 

### Q3

Write a program which reads an integer (smaller than 1000000)  then prints out how many of the digits are odd numbers. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 23423      | 2 | 
| 24602      | 0 | 
| 5          | 1 |

### HW-1

 Write a program that will take integers as inputs until the user enters a negative number. Then shows the user the sum of all the non-negative numbers he/she entered.
 

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 4 7 45 9 2 0 0 5 8 -4      | 80 | 
| 1 1 0 1 -1      | 3 | 

### HW-2

Write a program that reads an integer value, and computes the sum of the factorial of each digit . 
The output will be an integer. 

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 24     | 26 | 
| 122     | 5 | 
| 254     | 146 | 

 ### HW-3

Write a program that will take integers until the user enters an odd number. Then print the average of the even numbers. 
 - Assume only positive numbers will be entered by the user. 
 
 
| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 464221     | 3.6 | 
| 22121     | 2 | 
| 1     | 0 | 
