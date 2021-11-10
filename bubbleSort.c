#include<stdio.h>
int main() {
    int i,n=6,j,k,temp;
    int arr[]={5,2,1,34,12,67};
    printf("Unsorted Array: ");
    for(i=0;i<n;i++)
    {
    printf(" %d",arr[i]);
    }
    printf("\n");
    //algo for bubble sort
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
return 0;
}