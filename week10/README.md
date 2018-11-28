
## LAB 10 - 27.11.2018

### Q1 

Fill up an array of size 20 with random numbers using the **RANDINT()** macro.


```python
#define RANDINT(a,b) ( rand() % ((b)-(a)+1) + (a) )
```

### Q2 

Read 10 elements from the user and store them in an array. Then find largest and smallest elements of the array.

    input: 7 90 2 4 12 63 11 29 33 1
    output: Max:90 Min:1


### Q3 



Write a program which reads a sentence from the user (read characters until '\n' appears). Your program then should put this sentence into a char array (assume the sentence will be shorter than 50 characters). 

     Encrypt this sentence by adding +1 to the value of each character. Then print the encrypted version to the screen. 

     Decrypt this sentence by adding -1 to each character, and print the decrypted version again to the screen. 

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| Hello Bogazici     | Ifmmp!Cphb{jdj  Hello Bogazici | 
| Programming is fun   | Qsphsbnnjoh!jt!gvo   Programming is fun | 


                  
**Fun Fact:** [Ceasar Cipher](https://www.wikiwand.com/en/Caesar_cipher)

### Q4 


Write a program which reads an integer N from the user, then reads N integers from the user. Then your program should put these N integers into reverse order and print them to the screen. Assume N is smaller than 50. 


    input: 8, 1 2 4 3 5 6 8 7
    output: 7 8 6 5 3 4 2 1


### Homework

Write a program which reads two integers: N and M from the user. Then the program should read N more integers, then M more integers from the user. Assume N<M<50. 

     If the first combination of N integers appear at least once in the second combination of M integers, the program should write the starting index of the first appearance in the second combination. Otherwise it should not print anything. 


    input: 4 12
           4 5 6 5
           1 2 1 2 99 99 4 5 6 5 9 9
    output: 6
    
    input: 3 5
           2 3 2
           1 2 2 2 5
    output: 





```python

```
