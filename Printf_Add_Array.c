/* in this code we are printing the elements of array and address but address is not printing */

#include <stdio.h>
void printaray(int A[]);
int main()
{
    int A[15];
    for(int i=0;i<15;i++)
    {
        A[i]=i;
    }
    printaray(A);
    return 0;
}
void printaray(int A[])
{
    for(int i=0;i<15;i++)
    {
        printf("Value in the array %d\n",A[i]);
    }
}

// below code is not working....solve it
// void printdetail(int A[])
// {
//     for(int i=0;i<15;i++)
//     {
//     printf("Address %lu",&A[i]);

//     }
// }
