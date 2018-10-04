/* Q1
Write a program to find the area and the circumference of a circle.

 pi = 3
 r, read from user */
 
 #include <stdio.h>
 int main()
 {
     int pi=3;
     int r;
     
     scanf("%d",&r);
     int area = pi * r * r;
     
     printf("%d", area)
     
     return 0;
 }
