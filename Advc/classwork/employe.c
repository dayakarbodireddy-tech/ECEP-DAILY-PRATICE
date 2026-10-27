#include <stdio.h>
int main()
{
    int years;
    printf("enter the years:");
    scanf("%d",&years);
    if (years <= 2){
        printf("employee is fresher");
    }
    else if (years <= 5){
        printf("employee is experienced");
    }
    else if (years > 5){
        printf("senior experienced employee");
    }
    else {
        printf("find the job first");
    }
    return 0;
}