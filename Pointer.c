// Learn about Pointers
#include<stdio.h>
int main() {
    int a=11,*ptr2,*ptr3=NULL,*ptr=&a;
    printf("The address of pointer to a is %p\n",&ptr);
    printf("The address of 'a' with percent p and ptr is %p\n",ptr);
    printf("The address of 'a' with percent p and &a is %p\n",&a);
    printf("The value of 'a' is %d\n",*ptr); //derefrence means pointer points to a iski value chaye
    printf("The address of 'a' with percent x is %x\n",ptr); //%x gives address in hexadecimal form
    //NULL pointer
    printf("Pointer gives the garbage value if we do not assign any value: %p\n",ptr2);
    printf("Pointer is assigned with NULL value it gives zero value: %p",ptr3);
    return 0;
}