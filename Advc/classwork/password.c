#include <stdio.h>
int main()
{
    int length;
    printf("enter the length:");
    scanf("%d",&length);
    if (length >= 8){
        printf("password is valid");
    }
    else {
        printf("password is not valid");
    }
    return 0;
}