### Q1
Read n as the size of the array.  
Then, read n integers and fill the array.  
Then read an integer as k and assume it is positive.  
Send them to a function named "func" and return the counter as the following.  
Inside the function, count how many different pairs' absolute difference is equals k.  
For any i and j: |numbers[i] - numbers[j]| = k  

        Input:
        7
        0 1 2 3 4 5 6
        3
        Output:
        4

        Input:
        8
        4 6 8 9 11 1 2 5
        7
        Output:
        3

        Input:
        6
        5 8 6 9 2 3
        8
        Output:
        0

        Input:
        4
        1 9 1 9
        8
        Output:
        4

### Q2
Read n as the size of the array.  
Then, read n integers and fill the array.  
Print sum of the first n elements.  
Print sum of the first n - 1 elements.  
Print sum of the first n - 2 elements.  
	...  
Print sum of the first 3 elements.  
Print sum of the first 2 elements.  
Print sum of the first 1 elements.  
Then, print like above but in reverse order.  

        Input:
        10
        0 1 2 3 4 5 6 7 8 9

        Output:
        45 36 28 21 15 10 6 3 1 0
        0 1 3 6 10 15 21 28 36 45

        Input:
        10
        3 -2 -8 7 6 5 0 1 -1 9

        Output:
        20 11 12 11 11 6 0 -7 1 3
        3 1 -7 0 6 11 11 12 11 20

### Q3
Read n as the size of the array.  
Then, read n integers and fill the array.  
Then read an integer as k and assume it is positive.  
Send them to a function named "func" and return the sum as the following.  
Divide the array into some parts sized k.  
Print multiplication of the elements inside current part and do so for all parts.  
Return the sum of these multiplications.  

	Input:
	7
	0 1 2 3 4 5 6
	3
	Output:
	0 60 6
	66

	Input:
	12
	5 3 2 6 4 1 8 0 5 6 8 9
	4
	Output:
	180 0 2160
	2340

	Input:
	8
	9 1 5 -4 -2 7 -1 7
	5
	Output:
	360 -49 
	311
