#include <stdio.h>
int main()
{
    int username,password;
    printf("enter the username:");
    scanf("%d",&username);
    printf("enter the username:");
    scanf("%d",&password);
    if (username == 1){
        if (password == 1){
            printf("login successfully");
        }else {
            printf("login is invalid");
        }
    }else {
        printf("username is invalid");
    }
    return 0;
}