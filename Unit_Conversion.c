#include <stdio.h>
int main() {
    /* unit conversion system
    km to m
    m to cm
    inch to m
    pound to m */
    int i,num,unit;
    printf("Choose unit conversion.\n");
    printf("1. km to m\n");
    printf("2. m to cm\n");
    printf("3. inch to m\n");
    printf("4. pound to m\n");
    scanf("%d",&unit);
    if(unit==1) {
        printf("Selected unit conversion is km to m.\n");
        printf("Enter a number to convert a number : ");
        scanf("%d",&num);
        printf("km to m = %d",1000*num);
    }
    if(unit==2) {
        printf("Selected unit conversion is m to cm.\n");
        printf("Enter a number to convert a number : ");
        scanf("%d",&num);
        printf("m to cm = %d",100*num);
    }
   
}