
# Exercises

## Data Types

### Q1

Write a program to read the number of days and convert it into year, month and day.

    input: 3896
    output: "Year: 10, Month: 8, Day: 6"


### Q2

Take value of length and breath of a rectangle from the user as float. Find its area and print it on the screen in **int** and **float** forms.

    inputs:  5.2  4.89
    output:  "float: 25.42 int: 25"



### Q3

Write a program which reads three integers (a,b,c) from the user. Then prints their average as a float with 1 decimal places. (Hint: "%.1f") 

    input: 5 6 8
    output: 6.3


### Q4

Write a program which reads a lower-case letter from the user. Print its upper-case version.  Assume that the input character will always be a lower-case letter. 

    input: a
    output: A
    
    input: c
    output: C
    

## If - else, Switch




### Q5

 Write a program to read the temperature in Fahrenheit and display the message as follow:
 
      Nice day        temp > 60 and temp < 80
      Cold day        temp <= 60
      Hot Day         temp >= 80


Solve this problem with using both **if - else** and **switch ... case** statements.

### Q6

Write a program that checks whether the number entered by the user is divisible by 5 and 11 or not.

    input: 55
    output: "exactly divisible by 5 and 11"
    
    
    input: 50
    output: "exactly divisible by 5 but not by 11"
    
    input: 22
    output: "exactly divisible by 11 but not by 5"



### Q7

Write a program that takes the ages of 3 people as input and determine oldest and youngest among them.

    input: 26 29 18
    output: "Youngest:18, Oldest:29"

### Q8

A student will not be allowed to the final exam if his/her attendence is less than 75%. 

Write a program that takes two inputs: number of classes held and number of classes attended, and print  whether student is allowed to the final exam or not, with the attendance percentage.

    input: 20 16
    output: "allowed, 80%"
    
    
    input: 12 7
    output: "not allowed, 58.3%"


### Q9

Write a program that takes three numbers as input from the user and finds out whether one of the three numbers is the arithmetic mean of the other two. For example:

    input: 7,15,11
    output: 11 is the mean of 7 and 15

    input: 27,23,31
    output: 27 is the mean of 23 and 31

    input: 7,8,10
    output: No number is mean of the other two


### Q10 

Write a program that takes a positive integer in the range 1 to 365 (which corresponds to the day of the year) as input and outputs the day of the week. Assume that day 1 is Sunday. 

        Input: 16
        Output: Monday

        Input: 26
        Output: Thursday
        
 Use switch case.
 
 ### Extra
 
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
        
