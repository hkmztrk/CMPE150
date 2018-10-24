
### Q0


Write a program with 'Switch Case' to read two numbers and an integer choice from the following menu and print the result.
         
    a: Summation
    b: Sum of squares
    c: Sum of cubes
    d: Product
    o/w: Wrong choice!
    
       input: 3 6 d
       output 18
       
       input: 3 6 b
       output 45
       
       input: 3 6 z
       output Wrong choice
  
##### hint:  < math.h > library, pow() function

### Q1

Write a program that displays characters from 'c' to 'p'.

    output: c d e f g h i j k l m n o p




### Q2

Write a program that add integers from 1 up to 100. 

    output: 1 + 2 + 3 ... + 100 = 5050



### Q3

Write a program to read a character input in a loop.

Exit when pressed **e** or **E**.


### Q4

Write a program that displays characters from 'c' to 'p' **excluding vowels**.

    output: c d  f g h  j k l m n  p

### Q5

Write a program which reads an integer (smaller than 1000000)  then prints out how many of the digits are odd numbers. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 23423      | 2 | 
| 24602      | 0 | 
| 5          | 1 |

### Quiz Q1

Write a program which reads two integers (A, B). If the first number is divisible by the second number, then print |A|+B. Otherwise print |A|*B.


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| -5 1     | 6  | 
| -5 10    | 50 |
| 20 4     | 24|
| 20 7     |140|

Note:|A| corresponds to absolute value of A. If A is negative you should convert it to positive first.
Assume: B > 0 

### Quiz Q2

Write a program which reads a character C, if the character C is not a digit your program should read one more integer (A) and print its square (A^2). If the character C is a digit, your program should convert it to integer and print 2*C.

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| h 5     | 25  | 
| 3          | 6 |
| + 7 6      | 49|
| 2 c      | 4|


Notice that in some of the example inputs there are some extra characters or integers. If entered in one line, your program should not take the extra input into account. 


### Homework

Write a program that will take integers as inputs until the user enters a negative number. Then shows the user the sum of all the non-negative numbers he/she entered.


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 4 7 45 9 2 0 0 5 8 -4     | 80 | 
| 1 1 0 1 -1          | 3 |

