// finding the cartesian product of two sets
#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,size1,size2;
    printf("Enter the size of set A ");
    scanf("%d",&size1);
    printf("Enter the elements of set A= ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
        // printf(" %d",a[i]);
    }
    printf("\n");
    printf("Enter the size of set B ");
    scanf("%d",&size2);
    printf("Enter the elements of set B= ");
    for(j=0;j<size2;j++)
    {
        scanf("%d",&b[j]);
        // printf(" %d",b[j]);
    }
    //algo for cartesian product of two set A and set B
    printf("\n");
    printf("Cartesian product of two set A and set B\n");
    printf("AxB= ");
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
         printf("{%d,%d},",a[i],b[j]);
        }
    }
     size1=sizeof(a) / sizeof(a[0]);
     size2=sizeof(b) / sizeof(b[0]);
return 0;
}

![2021-10-21](https://user-images.githubusercontent.com/85106967/138150861-7eb47e1c-7618-4ad6-b55f-923af55d335c.png)


// OR
// METHOD 2
// FIND CARTESIAN PRODUCT WITH FUNCTION METHOD

// #include <stdio.h>
 
// void findCart(int arr1[], int arr2[], int n, int n1)
// {
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n1; j++)
//             printf("{%d, %d}, ", arr1[i], arr2[j]);
// }
 
// int main()
// {
//     int arr1[] = { 1, 2, 3 }; // first set
//     int arr2[] = { 4, 5, 6 }; // second set
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     findCart(arr1, arr2, n1, n2);
//     return 0;
// }
