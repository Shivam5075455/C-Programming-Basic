#include <stdio.h>
int main()
{
    char sub[40];

    printf("Enter subjects: ");
    gets(sub); // read string or taking input from user
    // puts(sub); //printf string
    printf("Your subjects are: %s\n",sub);
    // if statement
    if(sub=="Maths")
    {
        printf("You have Mathematics.\n");
    }
    
    return 0;
}