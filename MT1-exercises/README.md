
## MT1 Exercises

 ### Q1

Write a program that takes three numbers as input from the user and finds out whether one of the three numbers is the arithmetic mean of the other two. For example:

    input: 7,15,11
    output: 11 is the mean of 7 and 15

    input: 27,23,31
    output: 27 is the mean of 23 and 31

    input: 7,8,10
    output: No number is mean of the other two


 ### Q2

Write a program that takes two integer inputs:  hour (integer 0–23) and minute (integer 0–59).

   - Give an error message and stop if either integer is outside the required range.
   - Print the 24-hour time along with the equivalent 12-hour (AM/PM) time. 
   - The times should include leading zeros as necessary, so that it prints 03:08 rather than 3:8 for 3:08 AM.
        
        
            input: 11 15
            output: 11:15 is 11:15 AM

            input: 17 58
            output: 17:58 is 05:58 PM     

            input: -5 12
            output:  "Error: hour out of range."

            input:  6 70
            output:  "Error: minute out of range."
        


### Q3

Write a program that reads  a positive integer K and write a sequence using the rules given follow:
    
    set the first element of sequence to K.
    compute the next element as:
             half of the previous if previous is even
             three times the previous, plus one if previous is odd. 
                
Program terminates when the sequence reaches 1.

    input: 50 
    output:  50 25 76 38 19 58 29 88 44 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1




### Q4

Write a program which reads characters until the user enters two consecutive letters 'xy'. After reading each character your program should print it. Reading 'y' after 'x' should stop printing and also terminate your program.


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| Hello how are 123 yxy   | Hello how are 123 yx | 
| yyyyyyxy     | yyyyyyx| 
| 12342x4533y21xy     | 12342x4533y21x | 



###  Q5

Write a program which reads an integer N. Then your program should read N more integers and print the completed sequence by filling the prime numbers between each entry.

Assume: User will not enter the same number twice without entering a different number and numbers will be positive integers.


Write a program which reads characters until the user enters two consecutive letters 'xy'. After reading each character your program should print it. Reading 'y' after 'x' should stop printing and also terminate your program.

    input:
         2
         1 10
    output:
         2 3 5 7 
         
         
    input:
         4
         4 1 0 12
    output:
         3 2 2 3 5 7 11 

    input:
         2
         1 14 5 1 9
    output:
         2 3 5 7 11 13 

