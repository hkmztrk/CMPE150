## W13 // 18.12.2019

New type or combination of primitive types, struct.

#### How to declare?
```c
    struct student {
      int id;
      char pass;
      float grade;
    };
```
#### How to read from the console, fill the array and print it?
```c
    int main(void) {
      int i, n;

      scanf("%i", &n);

      struct student students[n];

      for (i = 0; i < n; i ++) {
        scanf("%i %c %f", &students[i].id, &students[i].pass, &students[i].grade);
      }

      for (i = 0; i < n; i ++) {
        printf("%i %c %.2f\n", students[i].id, students[i].pass, students[i].grade);
      }

      return 0;
    }
```
#### How to give a name to our struct?

You do not have to use a type definition. You may use it if you like. Type definition allows you to give a name to your struct.
```c
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct student {
      int id;
      char pass;
      float grade;
    } stu;

    int main(void) {
      int i, n;

      scanf("%i", &n);

      stu students[n];

      for (i = 0; i < n; i ++) {
        scanf("%i %c %f", &students[i].id, &students[i].pass, &students[i].grade);
      }

      for (i = 0; i < n; i ++) {
        printf("%i %c %.2f\n", students[i].id, students[i].pass, students[i].grade);
      }

      return 0;
    }
```
#### How to send the struct to a function?
```c
    #include <stdio.h>
    #include <stdlib.h>

    struct student {
      int id;
      char pass;
      float grade;
    };

    void printVariable(struct student stu) {
      printf("%i %c %.2f\n", stu.id, stu.pass, stu.grade);
    }

    void printArray(int n, struct student students[n]) {
      int i;
      for (i = 0; i < n; i ++) {
        printf("%i %c %.2f\n", students[i].id, students[i].pass, students[i].grade);
      }
    }

    int main(void) {
      int i, n;

      scanf("%i", &n);

      struct student students[n];

      for (i = 0; i < n; i ++) {
        scanf("%i %c %f", &students[i].id, &students[i].pass, &students[i].grade);
      }

      printArray(n, students);

      struct student myStudent;

      myStudent.id = 67;
      myStudent.pass = 'y';
      myStudent.grade = 13.45;

      printVariable(myStudent);

      return 0;
    }
```
Try anything to see.

    Input:
    3
    14 c 16.97
    74 f 95.13
    64 t 32.84
    14 c 16.97
    Output:
    74 f 95.13
    64 t 32.84
    67 y 13.45

### Q1

    First, prepare the struct.
    struct player {
        char id[4];
        int size;
        int year;
    };
    Then read, n, a1, a2, b1, b2 integers.
    Then read n times id, size and year to fill struct array.
    Send them to a function.
    Count and return how many players are inside the bounds.
    Conditions are a1 >= size >= a2 and b1 >= year >= b2.
    Print ids of the players who are inside the bound inside the function.
    Print the count that function returns.

    Input:
    6 19 16 180 165
    vbn 17 161
    dfg 18 177
    zxc 20 169
    bnm 19 181
    jkl 15 166
    wer 17 174
    Output:
    dfg
    wer
    2
    
### Q2
    First, prepare the struct.
    struct item_pair {
        int price1;
        int price2;
        int budget;
    };
    Then read n and fill the items array.
    Send n and array to a function.
    Count and return how many items we can buy from those item pairs.
    Rules: If the budget can buy both of them, buy both and print "Both items".
    If the budget can buy only one, buy it print "Item 1" or "Item 2".
    If the budget can buy only either one of them, buy the first one and print "Item 1".
    If the budget cannot buy anything, print "No buy".
    Input:
    6
    12 21 33
    15 12 11
    16 19 17
    18 11 13
    10 10 10
    10 10 20
    Output:
    Both items
    No buy
    Item 1
    Item 2
    Item 1
    Both items
    7

### Q3
    First, prepare the structs.
    struct point {
        int x;
        int y;
    };
    struct square {
        struct point p;
        int length;
    };
    Then, read three integers as the x y and length.
    (x, y) coordinates are left up corner of our square.
    Write 3 functions as area, perimeter and right_down.
    area takes a square and returns area of the square.
    perimeter takes a square and returns perimeter length of the square.
    right_down rakes a square and returns a point that right down corner of the square.
