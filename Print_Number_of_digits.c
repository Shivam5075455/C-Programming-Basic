Definition of Static:-  A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a function
                        call where the variable was declared is over. For example, we can use static int to count a number of times a function is 
                        called, but an auto variable can't be used for this purpose.

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
