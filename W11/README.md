## W11 // 04.12.2019

Multidimensional Arrays

We are going to consider only 2D arrays. If we will prepare a question includes an array that has more than 2 dimensions, I will let you know before you face it.

#### 1 dimensional array

int numbers[3] = {1, 2, 3}

    read:
    for(i = 0; i < n; i ++) {
      printf("%i ", &numbers[i]);
    }

    print:
    for(i = 0; i < n; i ++) {
      printf("%i ", numbers[i]);
    }
    console:
    1 2 3

#### 2 dimensional array

int numbers[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}, {5, 4, 3, 2, 1} }

    read:
    for(i = 0; i < n; i ++) {
      for(j = 0; j < m; j ++) {
        printf("%i ", &numbers[i][j]);
      }
    }
    
    print:
    for(i = 0; i < n; i ++) {
      for(j = 0; j < m; j ++) {
        printf("%i ", numbers[i][j]);
      }
      printf("\n");
    }
    console:
    1 2 3 4 5
    6 7 8 9 0
    5 4 3 2 1
    
numbers[0] = [1, 2, 3, 4, 5]  
numbers[1] = [6, 7, 8, 9, 0]  
numbers[2] = [5, 4, 3, 2, 1]  

numbers[0][0] = 1  
numbers[0][1] = 2  
numbers[0][2] = 3  
numbers[0][3] = 4  
numbers[0][4] = 5  
numbers[1][0] = 6  
numbers[1][1] = 7  
numbers[1][2] = 8  
numbers[1][3] = 9  
numbers[1][4] = 0  
numbers[2][0] = 5  
numbers[2][1] = 4  
numbers[2][2] = 3  
numbers[2][3] = 2  
numbers[2][4] = 1  

#### Function
Send:  
func(n, m, numbers);  
Receive:  
func(int n, int m, int numbers[n][m]) { ... }

### Q0
Read n as the number of rows (column size) and read m as the number of columns (row size).  
Print the numbers from 0 to n * m as 2D array format.  
Do not forget that i and j starts from 0. So, you will print the numbers in range of [0, n * m - 1].  

    Input:  
    3 5 
    
    Output:  
    0 1 2 3 4  
    5 6 7 8 9  
    10 11 12 13 14  
  
    Input:  
    2 6

    Output:  
    0 1 2 3 4 5  
    6 7 8 9 10 11  
    
### Q1
Read n as the number of rows and read m as the number of columns.  
Then, read the 2D-array.  
Print sum of each row to the first line.  
Print sum of each column to the second line.  

    Input:
    3 7
    1 2 3 4 5 6 7
    8 9 0 1 2 3 4
    5 6 7 8 9 0 1
    
    Output:
    28 27 36
    14 17 10 13 16 9 12

    Input:
    10 10
    0 1 2 3 4 5 6 7 8 9
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49
    50 51 52 53 54 55 56 57 58 59
    60 61 62 63 64 65 66 67 68 69
    70 71 72 73 74 75 76 77 78 79
    80 81 82 83 84 85 86 87 88 89
    90 91 92 93 94 95 96 97 98 99
    
    Output:
    45 145 245 345 445 545 645 745 845 945
    450 460 470 480 490 500 510 520 530 540
    
### Q2
Read n as the number of rows, read m as the number of columns and read k.  
Then, read the 2D-array as numbers array.  
Write a function named "func" and send n, m, numbers array and k.  
Return and print the element that is the kth element in the array.  
First element is the 0th element.  

    Input:
    4 3 7
    5 3 4
    6 1 9
    2 8 7
    0 -1 10
    
    Output:
    8

    Input:
    2 8 11
    5 2 3 4 6 7 9 1
    8 0 11 77 66 44 55 22
    
    Output:
    77

    Input:
    10 10 43
    0 1 2 3 4 5 6 7 8 9
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49
    50 51 52 53 54 55 56 57 58 59
    60 61 62 63 64 65 66 67 68 69
    70 71 72 73 74 75 76 77 78 79
    80 81 82 83 84 85 86 87 88 89
    90 91 92 93 94 95 96 97 98 99
    
    Output:
    43
    
### Q3
Read n as the number of rows, read m as the number of columns and read k.  
Then, read the 2D-array as numbers array.  
Write a function named "func" and send n, m, numbers array and k.  
Print the array as the following.  
In the first row, print first k elements and sum of them.  
In the second row, print first 2k elements and sum of them.  
In the third row, print first 3k elements and sum of them.  
...  
Apply this for all rows.  
If xk becomes higher then the row size, print and sum all elements in the row.  

    Input:
    3 11 3
    8 5 2 5 6 7 2 0 1 4 7
    9 6 3 8 1 4 0 3 2 7 5
    7 6 4 3 5 2 4 8 0 9 4
    
    Output:
    8 5 2 15
    9 6 3 8 1 4 31
    7 6 4 3 5 2 4 8 0 39

    Input:
    10 10 2
    0 1 2 3 4 5 6 7 8 9
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49
    50 51 52 53 54 55 56 57 58 59
    60 61 62 63 64 65 66 67 68 69
    70 71 72 73 74 75 76 77 78 79
    80 81 82 83 84 85 86 87 88 89
    90 91 92 93 94 95 96 97 98 99
    
    Output:
    0 1 1
    10 11 12 13 46
    20 21 22 23 24 25 135
    30 31 32 33 34 35 36 37 268
    40 41 42 43 44 45 46 47 48 49 445
    50 51 52 53 54 55 56 57 58 59 545
    60 61 62 63 64 65 66 67 68 69 645
    70 71 72 73 74 75 76 77 78 79 745
    80 81 82 83 84 85 86 87 88 89 845
    90 91 92 93 94 95 96 97 98 99 945
    
### Q4
Read n as the number of rows, read m as the number of columns, read a and b.  
Then, read the 2D-array as numbers.  
Write a function named "func" and send n, m, numbers array, a and b.  
Assume a differs from b and both is smaller than n.  
Change the ath row with the bth row.  
Print the array in the main function.  

    Input:
    6 3 1 4
    5 4 6
    2 0 3
    9 1 2
    7 6 1
    0 5 3
    8 7 8

    Output:
    5 4 6
    0 5 3
    9 1 2
    7 6 1
    2 0 3
    8 7 8

    Input:
    10 10 4 7
    0 1 2 3 4 5 6 7 8 9
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    40 41 42 43 44 45 46 47 48 49
    50 51 52 53 54 55 56 57 58 59
    60 61 62 63 64 65 66 67 68 69
    70 71 72 73 74 75 76 77 78 79
    80 81 82 83 84 85 86 87 88 89
    90 91 92 93 94 95 96 97 98 99

    Output:
    0 1 2 3 4 5 6 7 8 9
    10 11 12 13 14 15 16 17 18 19
    20 21 22 23 24 25 26 27 28 29
    30 31 32 33 34 35 36 37 38 39
    70 71 72 73 74 75 76 77 78 79
    50 51 52 53 54 55 56 57 58 59
    60 61 62 63 64 65 66 67 68 69
    40 41 42 43 44 45 46 47 48 49
    80 81 82 83 84 85 86 87 88 89
    90 91 92 93 94 95 96 97 98 99
