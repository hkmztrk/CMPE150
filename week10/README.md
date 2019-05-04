
## W10 // 17.04.2019

### Q0.1

Write a program which reads an integer N from the user, then reads N integers from the user. Read two more integers, low(L) and high (H). Write a program that finds the **largest element** in a sub-array of an integer array. The sub-array consists of the array cells indexed between **indices** low and high, **inclusive**. 

    input:  12
            34   59   69   19   83   25   36   23   36   33 17   99
            3  8 
            
    output: 83
    
    
    input:  12
            34   59   69   19   83   25   36   23   36   33 17   99
            7  5 
            
    output: 36

### Q0.2


Write a program which reads a sentence from the user (read characters until '\n' appears). Your program then should put this sentence into a char array (assume the sentence will be shorter than 50 characters). 

Then your program reads another char X (which is either lower or upper case character), whose position in the alphabet will be used as the encryption and the decryption key. Write a function named **charToKey()** which takes a character as a parameter and returns its position in the alphabet.

     e.g. Hello Bogazici 
          N
          output: Vszz}.P}uoˆwqw

         Encrypt this sentence by adding +14 to the value of each character. Then print the encrypted version to the screen. 
         Decrypt this sentence by adding -14 to each character, and print the decrypted version again to the screen. 
         
     e.g. Hello Bogazici 
          a
          output: Ifmmp!Cphb{jdj
          
         Encrypt this sentence by adding +1 to the value of each character. Then print the encrypted version to the screen. 
         Decrypt this sentence by adding -1 to each character, and print the decrypted version again to the screen. 
         
     e.g. Hello Bogazici 
          *
          output: Hello Bogazici

### Q1

Write a program which reads two integers: **N** and **M** from the user. Then the program should read N more integers, then M more integers from the user. Assume N<M<50. 

     If the first combination of N integers appear at least once in the second combination of M integers, the program should write the starting index of the first appearance in the second combination. Otherwise it should not print anything. 


    input: 4 12
                         4 5 6 5
           1 2 1 2 99 99 4 5 6 5 9 9 4 5 6 5
    output: 6
    
    input: 3 5
           2 3 2
           1 2 2 2 5
    output: 


### Q2

Write two functions **read_array()** and **print_array()** both of which take two parameters: integer array and the size of the array.

    read_array() fills an array of integers size of M.
    print_array() prints an array of integers size of M.

### Homework-1

Write two function named **invert()** and **copy_array()** 

    copy_array()  takes three parameters: two integer arrays and the size of array (M) and copies the first array to second. 
    invert()  takes an integer array as parameter and the size of array (M) and inverts the array.


 In the main function, you are expected to fill an array of size M (arr1). Then you will invert arr1 using invert() function, then copy its contents to arr2 using copy_array(). Print arr1 and arr2.
 
 
Make use of functions **read_array(...)** and **print_array(...)** you already defined.

    input: 7 7 12 5 5 7 4 3 2 1
    output: 1 2 3 4 7 5 5 12 7 7
    
    
** use const int **

### Homework-2

Write a program which reads an integer N and  then the program should read N more integers into an integer array. (Make use of  read_array() function) 

Then write a function named **findConsecutives()** which checks whether integer X is followed by integer Y among the elements of an integer array. 
    The functions returns the index of the first element X, or -1 if the sequence is not found. 
    
        input:  10
                -5 -3 0 6 4 16 -3 0 7 9
                6  4
        output: 3

        input:  10
                -5 -3 0 6 4 16 -3 0 7 9
                6  0
        output: -1
    

## TEACHING CODES LAB08 - QUESTIONS

### Q1

Write a function which takes two integer arrays arr1, arr2, and their sizes as two integers N and M. Then the function should remove all the elements in arr2 from arr1. The function should update arr1 so that it no longer contain elements from arr2. The function should return the new size of arr1. 
    Hint: you can create and use another temporary array in the function. 

Then in the main program, read two arrays from the user (first their sizes N, M, and then N+M integers as array elements). Then call the function passing the arrays and their sizes. Then print the first array to see the updated version. 

        input:  10 3
                1 2 3 4 7 5 5 12 7 7
                5 3 12
                
        output: 1 2 4 7 7 7
    
    
