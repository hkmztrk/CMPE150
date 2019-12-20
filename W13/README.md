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
