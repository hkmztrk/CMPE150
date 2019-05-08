#include <stdio.h>
#include <stdlib.h>


int strComp(char str[], char str2[] )
{
    int i = 0;
    int flag = 0;
    while (flag == 0)
    {

        if (str[i] > str2[i])
        {
            flag = 1;
        }
        else if (str[i] < str2[i])
        {
            flag = -1;
        }

        if (str[i] == '\0')
        {
            break;
        }

        i++;
    }
    return flag;
}

int main(void){

    char w1[50], w2[50];
    gets(w1);
    gets(w2);

    printf("%d", strComp(w1,w2));


}