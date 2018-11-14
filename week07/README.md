
## LAB 07 - 07.11.2018

**For self-study!**

[HackerRank](https://www.hackerrank.com/)

[CoderByte](https://coderbyte.com/)

[W3Schools](https://www.w3schools.in/c-tutorial/)


### Midterm Q2

Fare for the metro lines is calculated as follows: For the first time you use the metro, you pay the base fare. If you transfer to another line, you pay the transfer fare. 



|       | Student    | Regular        |       
| ---------  |:---------:| -------- |
|  Base fare  | 1.25  | 2.60 |
|  First transfer    | 0.55  | 1.85| 
|  Second transfer    | 0.50 | 1.40| 
|  Third transfer and more    | 0.45 | 0.90| 


Write a program that calculates and prints the total ticket fare. You will read a letter and an integer from the user. 

    •Letter 'S' or 's' represent that the passenger is a student.
    •Letter 'R' or 'r' represent that the passenger will pay the regular fee.
    •Integer value is the total number of trips made by the user.
    •You may assume that no other letter will be entered.
    •Your output should contain two decimal places. (Hint: Use %.2f) 
  

    
| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| S 1      | 1.25| 
| r 2      | 4.45 | 
| s 5      | 3.20| 
| R 3      | 5.85 | 




### Midterm Q3

Write a program that reads a sequence of integers until -1 is given, and prints the blips in them; that is, numbers that are larger than the numbers before and after them. 

For instance, in the following sequence of integers: 1 9 1 2 1 -1 the output should be 9 2 because both 9 and 2 are bigger than the numbers before and after them. 

The program should print a sequence of integers. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 1 2 1 3 2 4 3 3 5 2 -1 | 2 3 4 5| 
| 1 1 1 1 1 1 1 -1      |  | 
| 1 2 1 2 1 2 -1      | 2 2 2 | 
| 19 18 19 17 18 16 17 15 13 -1      | 19 18 17 | 



### Midterm Q4

Write a program which reads an integer n from the user and prints the following glass shape of height n. You may assume that n is a positive integer greater than or equal to 2. 


    
        input: 2
        output:
                *  *
                 **
                 
        input: 3
        output: 
                 *     *
                  *   *
                   ***
                   
        input: 4
        output: 
                *        *
                 *      *
                  *    *
                   ****
                  


### Q1

Write a functions that calculates the power of a given integer.

    The function has:
         two integers as parameter
         an integer return value




### Homework.1

Write a program to read integer (N) from the user then print the following N x N square with different symbols.

    input: 4
    output: 
  
            **..
            **..
            $$oo
            $$oo
    
    
    input: 6
    output:
    
            ***...
            ***...
            ***...
            $$$ooo
            $$$ooo
            $$$ooo


### Homework.2

Write a functions that checks whether the given character is lower case, upper case or a digit. Function takes a single parameter that is the character we want to check.

    Function returns:
                0 if characters is lower case
                1 if characters is upper case
                2 if characters is digit





### Homework.3

Write a functions that checks whether the given number is prime. Function takes a single parameter that is the integer we want to check. 

    Functions returns:
            1 if prime
            0 if not

Then use this function to find the number of prime numbers between two integers. 

        input: 2 20 
        output: 8

