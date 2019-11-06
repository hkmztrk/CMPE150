
# W07 Notes // 06.11.19

### Warm Up

### Q0.1

Write a program which reads an integer (smaller than 1000000)  then prints out how many of the digits are odd numbers. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 23423      | 2 | 
| 24602      | 0 | 
| 5          | 1 |

 ### Q0.2

Write a program that checks whether the given number is prime.

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 11     | 1 | 
| 4     | 0 | 
| 13     | 1 | 
    

## Functions 
[source here](https://www.codeanalogies.com/javascript-functions-explained)

### What is a function?
Let's think about the general concept of cooking with a recipe first. Using a recipe means that:

       You start with a specific set of ingredients
       You perform a specific procedure using those ingredients
       You will get a reliable product at the end
   
**A function is also a reusable recipe that performs the same set of actions over and over again on a set of ingredients.**

Those **ingredients** are called **parameters**. 

### Function types

       functions with RETURN -> create a new value
      
       functions WITHOUT return -> create a new format


### Void function

#### Example-1
```c
#include <stdio.h> 

// I am **declaring** a function. 
void boilWater() { // no parameters
    printf("Boiling water.");
}

int main(){
    boilWater(); // I am **calling** the function. 

    return 0;
}
```

#### Example-2

```c
#include <stdio.h> 
void boilWater(int water, float degree){  // I have two parameters
    printf("Boiling %d liters of water at %f C degree.", water, degree);
}

int main(){
    int water = 1;
    float deg = 120;
    boilWater(water, degree); // I am **sending arguments**. 

    return 0;
}

```

### Functions with return

#### Example-3

```c
#include <stdio.h> 
int divide(float num1, float num2){  // I have two parameters
    return num1/num2;
}

int main(){
    float a,b;
    scanf("%f%f", &a, &b);
    float result = divide(a, b); // I am **sending arguments**. 
    printf("%f", result);

    return 0;
}

```

 ### Q1

Write a function **isPrime(int num)** that checks whether the given number is prime. Function takes a single parameter that is the integer we want to check. 

    Functions returns:
            1 if prime
            0 if not

 ### HW-1

Write a function named **printAsTime** which reads hours, minutes, and seconds as three integers, 
then prints it to the screen as shown in the examples. 

    This function shouldn't return anything. 
     Assume no invalid input will be given (like 92 minutes or -2 hours). 
 
 | INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 5 12 3 | 05:12:03 | 
| 3 0 22     |  03:00:22 |  

 ### HW-2

Write a function named **factorial** that takes an integer as a parameter and computes and **returns** the factorial of that integer.

Write a program to compute  the summation of each digits' factorial using factorial function. 


| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 4 | 24 | 
| 3     |  6 | 
| 43     | 30| 

