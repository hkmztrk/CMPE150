## W09 // 20.11.2019

### Q1

Read n as the size of the array.  
Then, read n integers and fill the array.  
Find average of the array. Perform integer division.  
Print each element multiplication with average.  
Print each element division with average.  

Input:  
10  
0 1 2 3 4 5 6 7 8 9

Output:  
0 4 8 12 16 20 24 28 32 36  
0 0 0 0 1 1 1 1 2 2


Input:  
15  
2 6 7 45 10 25 9 7 81 50 31 26 3 14 51

Output:  
48 144 168 1080 240 600 216 168 1944 1200 744 624 72 336 1224  
0 0 0 1 0 1 0 0 3 2 1 1 0 0 2 


### Q2

Read n as the size of the array.  
Then, read n integers and fill the array.  
Create a new array named reversed and fill it as reverse of the numbers.  
Print the reversed array.  
Print every 3rd element in the reversed array starts from first element.  

Input:  
10  
0 1 2 3 4 5 6 7 8 9

Output:  
9 8 7 6 5 4 3 2 1 0  
9 6 3 0


Input:  
12  
81 52 16 8 0 11 2 83 9 61 43 20

Output:  
20 43 61 9 83 2 11 0 8 16 52 81  
20 9 11 16 


### Q3

Read n as the size of the array.  
Then, read n integers and fill the array.  
Print absolute difference between each consecutive numbers.  
So, you will print (n - 1) positive numbers.  

Input:  
10  
-5 5 0 1 2 3 -3 -2 -1 10

Output:  
10 5 1 1 1 6 1 1 11


Input:  
14  
9 15 -6 4 95 66 54 -22 31 17 48 -23 86 74

Output:  
6 21 10 91 29 12 76 53 14 31 71 109 12 


### Q4

Read n as the size of the array.  
Then, read n integers and fill the array.  
Then, read a 3-sized new array named mask.  
Print element-wise multiplication of the array and the mask. (This is applying the mask.)  
Consider value 0 for indices those are out of array.  
Middle element of the mask must overlap with the current index.  
For example:  
3  
5 6 7  
1 2 3  
Print a b c  
a = 0x1 + 5x2 + 6x3  
b = 5x1 + 6x2 + 7x3  
c = 6x1 + 7x2 + 0x3  
So, print 28 38 20  

Input:  
10  
0 1 2 3 4 5 6 7 8 9  
-1 2 -1

Output:  
-1 0 0 0 0 0 0 0 0 10


Input:  
10  
3 -2 -8 7 6 5 0 1 -1 9  
1 -2 3

Output:  
-12 -17 35 -4 10 -4 8 -5 30 -19



### Q5

Read n as the size of the array.  
Then, read n integers and fill the array.  
Write a function named func as the following.  
Count occurrences and find the element that occurs the most time consecutively.  
The function takes int n, int numbers[] and int *most  
*most indicates the number itself and the function returns how many times the most number occurs.  

Input:  
10  
3 3 3 4 4 4 4 2 2 1

Output:  
4 times 4


Input:  
10  
1 1 2 3 4 5 6 7 8 9

Output:  
2 times 1


Input:  
17  
25 25 12 12 12 0 0 0 0 0 25 25 25 25 25 25 25

Output:  
7 times 25
