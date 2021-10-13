// typecasting means we convert one datatype into other datatype
#include <stdio.h>
int main() {
    int a=5;
    float b= 37;
    float c=45;
    float d= (float) 39/4;
    printf("Value of a is %d\n",a);
    printf("Value of c without typecating %f\n",c);
    printf("Value of b by typecasting is %d \n",(int) b); // typecasting is done by here with (int)
    printf("Value of d %f",d);
    return 0;
}