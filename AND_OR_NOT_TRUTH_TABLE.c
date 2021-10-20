#include<stdio.h>
int main() {
    int a,b,c,i,temp;
    printf("__________________________\n");
    printf("A   B    A.B   A+B    A'\n");
    // printf("_____________________\n");
    for(i=0;i<4;i++)
    {
        a=i;
        b=i%2;
        a/=2;
        printf("__________________________\n%d   %d   %d     %d     %d\n",a,b,a*b,a||b,!a);
    }
    return 0;
}