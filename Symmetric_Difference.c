#include<stdio.h>
int main()
{    int a[10],b[10],c[20],d[20],i,j,k=0,n1,n2,l=0;
    printf("Enter the size of set A ");
    scanf("%d",&n1);
    printf("\n");
    printf("Enter the elements of set A ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        // printf("Enter the elements %d\n",a[i]);
    }
    printf("\n");
    printf("Entered elements of set A: ");
    for(i=0;i<n1;i++)
    printf(" %d",a[i]);
    // second set B
    printf("\n");
    printf("Enter the size of set B ");
    scanf("%d",&n2);
    printf("\n");
    printf("Enter the elements of set B ");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
        // printf("Enter the elements %d\n",b[j]);
    }
    printf("\n");
    printf("Entered elements of set B: ");
    for(j=0;j<n2;j++)
    printf(" %d",b[j]);
    printf("\n");
// algo for A-B
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++)
    if(a[i]==b[j])
    break;
    if(a[i]!=b[j])
    c[k++]=a[i];
}
// printf("A-B: ");
// for(i=0;i<k;i++)
// printf(" %d",c[i]);
// printf("\n");

// algo for B-A
for(j=0;j<n2;j++)
{
    for(i=0;i<n1;i++)
    if(b[j]==a[i])
    break;
    if(b[j]!=a[i])
    d[l++]=b[j];
}

// printf("B-A: ");
// for(i=0;i<l;i++)
// printf(" %d",d[i]);
// printf("\n");

// algo for (A-B) U (B-A)
printf("Symmetric difference= {");
for(i=0;i<k;i++)
printf("%d,",c[i]);
for(i=0;i<l;i++)
printf("%d,",d[i]);
printf(" }");
return 0;
}