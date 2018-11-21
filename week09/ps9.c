/*
 ============================================================================
 Name        : PS-Week9-Example1-Pointer.c

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main(){

    TC_BEGIN;

    int a = 3, b = 2, *ptr, *x, *y;
    ptr = &a;            /* ptr has the value of the address of a                        */
    printf("ptr:%d\n",ptr);


    b = ptr;            /* in the p, address of a is kept, then by using *ptr,
                              you access to variable a, then b = 3     */
    printf("b:%d *ptr:%d ptr:%d\n",b,*ptr,ptr);


    *ptr = a;            /* value of a does not change */
    printf("a:%d *ptr:%d\n",a, *ptr);


    x = ptr;             /* the value of ptr assign to the varable x                    */
    printf("x:%d *x:%d\n",x, *x);


    x = &*ptr;          /* first access the variable which is stored in the
                                address, whose value is kept in ptr, then take its
                                address, the result is simply equal to the value of ptr*/
    printf("x:%d  *x:%d\n",x, *x);


    y = *&ptr;          /* take the address of the variable ptr, then access the
                                the variable that is stored in this address. This is
                                simply the value stored in ptr                                 */
    printf("y:%d y*:%d\n",y, *y);


    a = *&b;             /* take the address of variable b, then access the variable
                                which is stored in this address, simply b                  */
    printf("a:%d b:%d\n",a,b);

    //a = &*b;             /* invalid, since * can be applied to pointers or addresses. comment out this line for successful compile*/

    ///////////////////*****************************////////////////////////////

    ///printf("ptr:%d *ptr:%d \n",ptr, *ptr);

    *ptr = 5;

    int z;
    z = *ptr +1;   // (*ptr) + 1
    printf("z:%d *ptr:%d \n",z,*ptr);

    z = *ptr++;   //   *(ptr++) This operation first assigned z = *p
                  //            then ptr is increased by 1, meaning the
                 //             address ptr keeps is increased.
    printf("z:%d *ptr:%d \n",z,*ptr);

    z = *ptr; // z changed, because now ptr points to a new address which
              // we don't know what is stored in.
    printf("z:%d\n",z);

    ///////////////////*****************************////////////////////////////

    int m, n, *pm, *pn;
    pm = &m;

    *pm = 0; /* we put the value of 0 to the address pm points to, which is m*/
    printf("m:%d *pm:%d \n",m,*pm);

    pn = pm; /* now both pm and pn keeps the same address, and point to m*/
    printf("*pn:%d  \n",*pn);

    *pn +=1; /* if we increase the value that pn points to, the result
              *affect m and *pm as well.*/
    printf("m:%d *pm:%d  *pn: %d \n",m,*pm, *pn);




    TC_END;
    return 0;
}
