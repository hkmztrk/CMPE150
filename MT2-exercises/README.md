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
