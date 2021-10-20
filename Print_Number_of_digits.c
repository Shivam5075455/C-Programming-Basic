// print and count the number of digits
#include <stdio.h>
int number(int digit)
{
    static int count=0;
    if(digit>0)
    {
        count++;
        number(digit/10);
    }
    else
    {
        return count;
    }
}

int main()
{
    int size1,count=0;
    printf("Enter positive number = ");
    scanf("%d",&size1);
    count=number(size1);
    printf("Number of digits %d = %d",size1,count);
    return 0;
}
