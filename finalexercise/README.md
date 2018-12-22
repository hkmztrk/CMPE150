
# Exercises

### Q1

Write a function called **kthGreatest** that accepts an integer array a, the size of array N and an integer k as its parameters and returns the kth greatest element.

    Assumptions: 
    N will be larger than or equal to k and k will not be equal to 0. 
    N will not be greater than 50. 

    Hint: 
    You may want to sort the array first.

        input: 5 2
               2 8 4 5 3          
        output: 5
          
        input: 8 1
               74 85 20 100 99 86 53 4
        output: 100 
         


### Q2

Write a program based on the following assumptions/rules: 

        •You have an integer array of enough size.
        •When the user enters 1, the next input (integer) will be added (i.e., inserted) to the array.
        •When the user enters 2, the next two inputs will be added to the array.
        •When the user enters -1, the last element will be removed from the array.
        •When the user enters 3, the sum of the elements in the current array will be calculated and added to the array.
        •When the user enters 4, the current array will be printed and program will be terminated.

 For example, for the first example, 
 
        •The program reads an integer: 1, which means that the following integer will be added to the array. So the program reads 6 and adds it into the array.
        •Then it reads 2, which means that the following two integers will be added to the array. So the program reads 10 and 20 and adds them into the array.
        •Then it reads -1 which means that the last element of the array will be removed. So 20 is removed.
        •Then it reads 3 which means that the sum of the current array elements will be calculated and added into the array. So 6+10=16, 16 is added into the array.
        •Then it reads 4 which means that the current array will be printed. So 6 10 16 will be printed on the screen. 



| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 1 6 2 10 20 -1 3 4      |  6 10 16   | 
| 2 5 10 2 20 30 -1 -1 3 4     | 5 10 15  | 
| 1 5 3 3 3 4      |  5 5 10 20    | 
| 1 2 2 20 40 3 -1 -1 4     |  2 20    | 


### Q3

Write a program which takes 3 x 3 matrix whose each element is in the range 1 to 9, each number used only once, as input from the user and outputs whether it is magic square matrix or not.

    A magic square matrix is one in which sum of all three rows, all three columns, and the two diagonals is equal. 
    Your program should also check whether the inputted matrix is in the correct format or not, i.e. all the entries should be in the range 1 to 9 and each entry should be used only once.  
    
    
       e.g. following is a magic square matrix:
   
          2   7   6
          9   5   1
          4   3   8
          
       output: yes
    


### Q4

Write a program to swap the adjacent characters of a given string if the string length is even and print the new string.

    input: wolf
    output: owfl
    
    
    input: cat
    output: cat



### Q5

 Write a program that takes an array of size 10  and integer M as inputs from the user and left rotates an array M places. 
 
     * M < 0, the array is right rotated M times.
     * M = 0, the array stays the same. 

     input: 2
            0 1 2 3 4 5 6 7 8 9
     output:    
            2 3 4 5 6 7 8 9 0 1

     input: -3
            0 1 2 3 4 5 6 7 8 9
     output:    
            7 8 9 0 1 2 3 4 5 6
            

### Q6

Write the function with the given prototype which finds all the occurrences of arr2 in arr1. Print all the starting index positions of occurrence. Assume the sizes of arr1 as 10 and arr2 as 4.

        void findBinary(int arr1[], int arr2[])

        input: 1010101101
               1010

        output: 0,2,4
        

        input: 0111011101
                1110

        output: 1,5

### Q7

The given code reads two integers: n, m, then reads nxm integers into 2-D integer array: table. Find and print the size of the longest vertical line of zeros. 


                input:  3 3
                        0 0 0 
                        0 2 0 
                        0 0 3 
                
                output:  3
                
                
                input:   4 5
                         0 1 0 3 0
                         1 0 2 0 5
                         0 1 0 3 0
                         1 0 2 0 5
                         
                output:  1 


### Q8

Write a program that calculates the result of a given math operation. The given program reads the input math operation as a string. You should calculate and print the result.

Assume that the input will only contain numbers, summation and subtraction operators. The input will not contain spaces or any other types of characters and operators. Each input will contain exactly one equals character at the end. 

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 32+3-5=      |  30   | 
| 123-23-101=     |  -1  | 
| 1+11-111+99+5=      |  5    | 




### Q9

Write a function which takes two strings as parameters and checks whether are anagrams or not. 

    The function returns 1 if they are anagrams, 0 otherwise.
    Two words are said to be anagrams if the letters of one word can be rearranged to form the other word. 

    input: stressed, desserts
    output: 1





### Q10

Write a program to capitalize first character of each word of a given string and print the new string.

    input: of course it is happening inside your head, harry.
    output: Of Course It Is Happening Inside Your Head, Harry.
    




### Q11

Write a program which reads a long text from the user as lines until the user puts a dot (.) in the end. Then the program should print the most frequent letter in the text (which repeats more than the others).
 Note that the space character is not a letter. 
 
        Assumptions:
        •Always one of the letters will have more frequency than the others.
        •User will enter only lower-case characters of english alphabet and put exactly one space between any two words and not put any spaces at the end of each line.
        •The text will be shorter than 1000 characters, and there will be no punctuation except the dot in the end (No comma, no quotes, etc..).
        •The user will enter less than 100 characters for each line. 

        input:
             ilim ilim bilmekdir
             ilim kendini bilmekdir
             sen kendini bilmez isen
             ha bir kuru emekdir.
       output:
             i  
             
       input: lale ile leylak.
       output: l  
       


### Q12
       
Write a program which takes N as the size of square and a sequence of characters as move directions.

       Directions can be either ‘U’ for “up” or ‘R’ for “right”. 
       The program then prints the path that starts at the bottom left corner of the grid and follows the directions given by the user. 

        If the path reaches either the top or right boundaries of the grid, the program terminates.
        You may assume that the number of directions will be at most 3 times the size of the grid. 


                input:  6
                        UURURR
                
                output:
                        | | | | | | |
                        | | | | | | |
                        | |X|X|X| | |
                        |X|X| | | | |
                        |X| | | | | |
                        |X| | | | | |

### Q13

Write a function called **findUniqueLowercaseChars** that finds and writes the unique lowercase characters of a given string str in the order of appearance into the string distinct. Remember, a unique character is a character that occurs only and exactly once in the input string. 

For instance, if the input string is 'mississippi', the result should be 'm'. The main function is given. The string that will be processed is read from the user in the main function. After calling the findUniqueLowercaseChars function, the resulting string is printed. 

         - If there is no unique lowercase characters you should print empty string. 
         - The resulting string is printed in main function, you should not print anything within your function. 
         - Assume max. length of str and unique is 99.
         
        
| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| this is an example     |  thnxmpl  | 
| THIS is the SECOND SENTENCE    |  isthe  | 
| this is the third sentence     |  rdc    | 	

### Q14

Consider a real estate assessment program. Each house has an area in terms of square meter (integer) and a price per square meter (integer).

The given program defines a struct named **House** with three elements: **number, area, and price**. (Number is for identifying the houses since you will refer to the houses with these numbers). 

Then, the program defines an array of houses named: houses, and defines a house named: expensive. Then, it reads an integer N, and then reads the area and price values of N houses from the user. In the meantime, it assigns numbers (starting from 1) to each house. 

You should find which of the houses has maximum total price. Then, assign that particular house to the variable: expensive. Finally, the program prints the expensive house to the screen (Currently prints meaningless values because expensive is not initialized yet). The total price of a house is computed by multiplying the area of the house with its price per square meter. For example, for the first sample input/output pair, the total price of the fourth house is 3250 (i.e., 250 * 13). 

    Assume one of the houses will be more expensive than the others everytime. 



                input:    4
                         200 12
                         150 20
                         300 7
                         250 13

                 output: Expensive:
                         Number: 4
                         Area: 250
                         Price: 13


                 input:  3
                         500 50
                         455 65
                         600 30

                 output: Expensive:
                         Number: 2
                         Area: 455
                         Price: 65 

