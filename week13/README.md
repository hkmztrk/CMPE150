
## W13 // 015.05.2019

## 2D Arrays

### Q1

Write a program which reads two integers: N, M from the user, then reads NxM integers (N rows, M columns) as a matrix from the user. 
The program should print the transpose of the matrix to the screen.

    input: 
            5 6
             1 2 3 4 5 6
             9 9 9 9 2 9
             1 1 1 1 9 1
             2 2 2 2 2 9
             1 2 1 2 1 2
    
    output: 
             1 9 1 2 1 
             2 9 1 2 2 
             3 9 1 2 1 
             4 9 1 2 2 
             5 2 9 2 1 
             6 9 1 9 2  

### Q2

Write a program which reads a sentence as a string, and an integer, N. Then the program should exclude the Nth word from the sentence , then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case. ** Solve using 2D array**

        ---INPUT--- -
        merhaba dunyali nasilsin
        2

        --OUTPUT--- 
        merhaba nasilsin 


### Q3

Write a program which reads a chessboard as an 8x8 matrix from the user. In the chessboard, there will be one rook (kale) represented by integer: 8, and multiple pawns (piyonlar) represented by integer: 1. The rest will be empty: 0. 

 The rook will capture the closest possible pawn. Your program should print the chessboard to the screen after the capture.
 
 
        input:
             0 0 0 0 0 0 0 1
             0 0 0 0 1 0 0 0
             0 0 8 0 0 0 0 1
             0 1 0 0 0 0 0 0
             0 0 1 0 0 0 0 0
             0 0 0 0 0 0 0 0
             0 0 0 0 0 0 0 0
             0 0 0 0 0 0 0 0
     
        output:
             0 0 0 0 0 0 0 1 
             0 0 0 0 1 0 0 0 
             0 0 0 0 0 0 0 1 
             0 1 0 0 0 0 0 0 
             0 0 8 0 0 0 0 0 
             0 0 0 0 0 0 0 0 
             0 0 0 0 0 0 0 0 
             0 0 0 0 0 0 0 0  


## Struct

### Q4

The given code defines a struct: Student. The program currently reads an integer: n, then reads midterm 1, midterm 2 and final grades of n students. Assigns an id to each student from 1000 to 1000+n-1, and gives a letter grade 'I' to each of them. Then prints their id's and letter grades. 

     You should complete the given section to assign an appropriate letter grade to each student. Like: 
        100-75: A 
        74-50: B 
        49-25: C 
        24-0: F 

 Exam weights are 30%, %30, %40, respectively. 

### Homework-1

Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer). 

 Write a program which reads an integer n first, then reads the names, page counts and prices of n books. 

 Write a function which takes an array of books, and sorts them according to their prices. 

 Using that function, your program should print the names and page counts of each book with the order of their prices. Like: 

     1- LOT: 528 pages.
     2- THG: 727 pages.
     3- MSB: 340 pages.
     etc.. 
