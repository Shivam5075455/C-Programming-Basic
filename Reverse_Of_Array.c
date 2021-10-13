/* printing array elements in reverse order */

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    int i,a=5;
    printf("Origional array:");
    for(i=0;i<a;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n\n");
    printf("Reverse array: ");
    for(i=a-1;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }
}