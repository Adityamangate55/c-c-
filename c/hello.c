#include<stdio.h>

int main()
{
    int a,b,c;\

    printf("did you pass the exam \nenter the 0=no , 1=yes");
    scanf("%d",&a);
    printf("did you get the car \nenter the 0=no , 1=yes");
    scanf("%d",&b);
    
    if (a&&b){
        printf("you got the car and also passed");
    }
    else if(a||b){
        printf(" no car and not passed");
    }
    else{
        printf(".")
    }
    return 0;
}