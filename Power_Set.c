#include <stdio.h>
#include<math.h>
void Powerset(int *set, int size)
{
    
    int pow_set_size = pow(2, size);
    int i,j;
    //  printf("{ ");
    for(i=0;i<pow_set_size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i&(1<<j))
            printf(" %d",set[j]);
        }
        printf("\n");
    }
    // printf(" }");
}
int main()
{
    int set[10],m,size;
    printf("Enter the size of set A ");
    scanf("%d",&size);
    printf("\n");
    printf("Enter the elements of set A: ");
    for(m=0;m<size;m++)
    {
        scanf("%d",&set[m]);
    }
    Powerset(set,size);
    return 0;
}