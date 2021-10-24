#include<stdio.h>
#include<conio.h>
int main() {
    int a[10],b[10],c[20],i,j,k=0,n1,n2;
    printf("Enter the size of set A ");
    scanf("%d",&n1);
    printf("\n");
    printf("Enter the elements of set A \n");
    for(i=0;i<n1;i++)
    {
        // printf("Enter the elements\t");
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set B ");
    scanf("%d",&n2);
    printf("\n");
    printf("Enter the elements of set B \n");
    for(j=0;j<n2;j++)
    {
        // printf("Enter the elements\t");
        scanf("%d",&b[j]);
    }
    //algo for union
    for(i=0;i<n1;i++)
    {
        for(j=0;j<k;j++)
        {
            if(c[j]==a[i])
            break;
        }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<k;j++)
        {
            if(c[j]==b[i])
            break;
        }
        if(j==k)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("Union: ");
    for(i=0;i<k;i++)
    {
        printf(" %d",c[i]);
    }
    return 0;
}