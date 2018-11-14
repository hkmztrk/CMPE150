
## LAB 08 - 14.11.2018




###  Q1

Write a function named **fetchDigit** which takes two integers as input: **number** and **n**. 
Function should return the n.th digit (from the right) of the number as an integer. 
If the number is less than n digits, Function should return -1. 

 Then write a program which reads a positive integer z and another integer x, then print out the x.th digit of z. 
 If the input is incorrect (z doesn't have x digits), program should print "-1". 
  
    
| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 23423 3      | 4| 
| 204612 5      | 0 | 
| 52 9      | -1| 





### Q2
Write a function named toUpper which takes a char as input, and returns the upper case version of the character if it is a lower case letter. Otherwise it should return the same character. 

 Then write a program which reads a word from the user, and prints it with upper case characters. Assume valid words will be given. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| bogazici | BOGAZICI | 
| CmpE     |  CMPE | 
| HAGI     | HAGI| 
| 19 18 19 17 18 16 17 15 13 -1      | 19 18 17 | 



### Q6

Write a function that takes an integer n and prints a square nxn with '*'s.

  input: 4
  output: 
  
             *
             **
             ***
             ****  
                  
                  


### Q10
Write a function that takes an integer as a parameter and computes the factorial of that integer.

Write a program to compute  the summation of each digits' factorial using factorial function. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 4 | 24 | 
| 3     |  6 | 
| 43     | 30| 


### Q12

Write a function that will take an integer n, and returns 't' if it's a perfect number*. Otherwise the function should return 'f'. 

 * Perfect Number: a positive integer that is equal to the sum of its positive divisors excluding the number itself. 

 Then write main appropriately to see the result. 

### Homework.1

Write a function that will take an integer as a parameter. Then calculates and returns its binary version as another integer. 

 Then write main appropriately to see the result.
 
 | INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 25 | 11001 | 
| 532    |  1000010100 | 
| 5     | 101| 


### Homework.2

Write a function named primeFactors which takes an integer as a parameter and prints all prime factors of the number. Prime factor of a number is a prime number that can divide corresponding number.

For example:  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 are the prime numbers which are smaller than or equal to 35 and just 5 and 7 can divide 35 without remainder. That's why, prime factors of 35 are 5 and 7.

 | INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 35 | 5 7 | 
| 240 |  2 3 5 | 
| 13    | 13 | 



### Homework.3

Write a function named sumOfSquares which takes two integers, a number to calculate the sum of the squares of its digits and another number to perform this n times. Function returns the final sum of squares.

For instance for inputs 16 and 4,  sOS(16) = 17, sOS(17) = 50, sOS(50) = 25, sOS(25) = 29, we started from 16, and performed the sumOfSquares 4 times, the function should output 29.



 | INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 16 4 | 29 | 


