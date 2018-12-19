
## LAB 13 - 19.12.2018

### Q1

Write a function named **strComp** which compares two strings:

    returns <0 if S1<S2
    returns =0 if S1==S2
    returns >0 if S1>S2
    For example "abc" < "abd", "dac" > "cbd", etc. 
    
Hint: strComp(char S1[], char S2[])


### Q2

Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case. 

        ---INPUT--- -
        merhaba dunyali nasilsin
        dunyali

        --OUTPUT--- 
        merhaba nasilsin 


### Q3

Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string. 

 In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one. 

        ---INPUT--- 
        aksam oldu huzunlendim ben yine
        3 

        ---OUTPUT--- 
        huzunlendim 


### Q4

The given code defines a struct: Student. The program currently reads an integer: n, then reads midterm 1, midterm 2 and final grades of n students. Assigns an id to each student from 1000 to 1000+n-1, and gives a letter grade 'I' to each of them. Then prints their id's and letter grades. 

     You should complete the given section to assign an appropriate letter grade to each student. Like: 
        100-75: A 
        74-50: B 
        49-25: C 
        24-0: F 

 Exam weights are 30%, %30, %40, respectively. 

### Q5

Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer). 

 Write a program which reads an integer n first, then reads the names, page counts and prices of n books. 

 Write a function which takes an array of books, and sorts them according to their prices. 

 Using that function, your program should print the names and page counts of each book with the order of their prices. Like: 

     1- LOT: 528 pages.
     2- THG: 727 pages.
     3- MSB: 340 pages.
     etc.. 

 ### Homework
 
 Define a struct named: Person which has an age, and a salary.
 Define a struct named: Family which has up to 9 persons and personCount (integer). 

 Write a function which takes 3 families, and returns the age of the person who earns the most in the family with the least total salary. (age of the richest person in the poorest family) 
