
## LAB 11 - 05.12.2018

### Q0

Write a program which reads two integers: **N** and **M** from the user. Then the program should read N more integers, then M more integers from the user. Assume N<M<50. 

 If the first combination of N integers appear at least once in the second combination of M integers, the program should write the starting index of the first appearance in the second combination. Otherwise it should not print anything. 


    input: 4 12
           4 5 6 5
           1 2 1 2 99 99 4 5 6 5 9 9
    output: 6
    
    input: 3 5
           2 3 2
           1 2 2 2 5
    output: 


### Q1

Write two functions **read_array()** and **print_array()** both of which take two parameters: integer array and the size of the array.

    read_array() fills an array of integers size of M.
    print_array() prints an array of integers size of M.

### Q2

Write two function named **invert()** and **copy_array()** 

    copy_array()  takes three parameters: two integer arrays and the size of array (M) and copies the first array to second. 
    invert()  takes an integer array as parameter and the size of array (M) and inverts the array.


 In the main function, you are expected to fill an array of size M (arr1). Then you will invert arr1 using invert() function, then copy its contents to arr2 using copy_array(). Print arr1 and arr2.
 
 
Make use of functions **read_array(...)** and **print_array(...)** you already defined.

    input: 7 7 12 5 5 7 4 3 2 1
    output: 1 2 3 4 7 5 5 12 7 7
    
    
** const int

### Q3


[Hungarian Bubble Sort](https://www.youtube.com/watch?v=lyZQPjUT5B4&t=169s)

Write a function named **bubble_sort()** which two parameters: an integer array and the size of the array (M), and sorts the values in an array in ascending order. 

Make use of functions **read_array(...)** and **print_array(...)** you already defined.

    input: 7 7 12 5 5 7 4 3 2 1
    output: 1 2 3 4 5 5 7 7 7 12 



### Homework.1

Write a function which takes two integer arrays **arr1**, **arr2**, and their sizes as two integers **N** and **M**. 

        Then the function should remove all the elements in arr2 from arr1. 
        The function should update arr1 so that it no longer contain elements from arr2. 
        The function should return the new size of arr1.

        Hint: you can create and use another temporary array in the function. 

Then in the main program, read two arrays from the user (first their sizes N, M, and then N+M integers as array elements). Then call the function passing the arrays and their sizes. Then print the first array to see the updated version. 


Make use of functions **read_array(...)** and **print_array(...)** you already defined.


        input: 10 3
               1 2 3 4 7 5 5 12 7 7
               5 3 12
               
        output: 1 2 4 7 7 7


![Removing an element from an array](https://github.com/hkmztrk/CMPE150/blob/master/week11/remove-arr.PNG)

### Homework.2

Write a function which takes **three integer arrays**, and the sizes of the first and the second array (n, m).  The first and the second arrays will be sorted (ascending) as they are given. 

    The function should merge the first and the second array into the third one in sorted manner. 
    The third array's content is unimportant, and its size should be large enough (>=n+m). 
    It will be used as the output of the function. 

In the main program read two sorted arrays (as you did in the previous question) , and create the third one. Then pass them into the function, then print the third array to see the result.


Make use of functions **read_array(...)** and **print_array(...)** you already defined.


        input: 4 5 
               1 3 5 8 
               2 3 4 5 6
               
        output: 1 2 3 3 4 5 5 6 8


```python

```
