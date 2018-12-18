
## LAB 12 - 12.12.2018

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




### Q3

Write a function named **strlen** which has a string as a parameter and returns the length of the string.



### Homework.1

Write a function named **strcmp** which takes two parameters, two strings, and returns the length of the string.





### Homework.2

Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string. 

 In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one. 

        ---INPUT--- 
        aksam oldu huzunlendim ben yine
        3 

        ---OUTPUT--- 
        huzunlendim 





### Homework.3

Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case. 

        ---INPUT--- -
        merhaba dunyali nasilsin
        dunyali

        --OUTPUT--- 
        merhaba nasilsin 


