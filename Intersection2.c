//we are finding intersection of sets 
#include <stdio.h>
#include <conio.h>
int main() {
    int a[10];
    int b[10];
    int c[20],n1=5,n2=5,i,j,n3=0,found;
    printf("Enter the size of array A= ");
    scanf("%d",&n1);
    printf("\n");
    printf("Enter the elements of set A: ");
    for(i=0;i<n1;i++)
    {
        scanf(" %d",&a[i]);
        printf(" %d",a[i]);
    }
    printf("\n");
    //second set B started
    printf("Enter the size of array B= ");
    scanf("%d",&n2);
    printf("\n");
    printf("Enter the elements of set B: ");
    for(j=0;j<n2;j++)
    {
        scanf(" %d",&b[j]);
        printf(" %d",b[j]);
    }
    printf("\n");
    //algo for intersection
    for(i=0;i<n1;i++)
    {
        found=0;
        for(j=0;j<n2&&!found;j++)
        {
            if(a[i]==b[j])
            found=1;
        }
        if(found)
        {
            c[n3++]=a[i];
        }
    }
    printf("\n After intersection ");
    for(i=0;i<3;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}