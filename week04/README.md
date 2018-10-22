
### Q1

Write a program that reads the distance (km) between two cities: 

A and B, the speed of a vehicle (km/h), and some travel time (hours). 

Starting from A to B, your program should calculate the status of the travel at given time. 

If the car can reach the destination (B) within the given time, the program should print: "The vehicle has arrived X hours ago" (X must be calculated). 


    If the car can not reach the destination in the given time, the program will print either 
          "The journey continues, the car is closer to A" 
    or
          "The journey continues, the car is closer to B" 
     according to the position of the car in the road.


### Q2

Write a basic calculator program (+, -, *, /) with if-else statements. 

 The program takes three inputs: float, char, float, then prints the result. 

      input: 1 + 45
      output: 46.0
      
      input: 1 - 45 
      output: -44.00 

### Q3

Write a program that will take 2 numbers from the user:

- if the first number is divisible by the second number, your code should print "it is divisible",  

- if it is not divisible, then print "it is not divisible". 

- if one of your numbers is nonpositive, print "Incorrect input" 


	input: 45 5 	output: it is divisible 
	input:45 6 		output: it is not divisible 
	input:-34 17 	output: Incorrect input 

### Q4

Write a program with 'Switch Case' which takes a character as an input and prints:

    input: a OR A
    output: Plan A
    
    input: b OR B
    output: Plan B
    
    intput: others
    output: No Plan


### Q5

Write a program to check vowel or consonant:

    input: 9 
    output: is not alphabet
  
    input: a
    output: vowel
  
    input: b
    output: consonant


### Q6 - extra

Write a program to read the three numbers from the user and find and display the largest number among them.

    input: 3 24 8
    output: 24

### Homework


Write a program with 'Switch Case' to read two numbers and an integer choice from the following menu and print the result.
         
    a. Summation
    b. Sum of squares
    c. Sum of cubes
    d. Product
    o/w: Wrong choice!
    
       input: 3 6 d
       output 18
       
       input: 3 6 b
       output 45
       
       input: 3 6 z
       output Wrong choice
  
##### hint:  < math.h > library, pow() function
