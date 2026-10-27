#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if (marks >= 60){
        printf("second class");
    }
    else if (marks >= 90)

    {
        printf("distinction");
    }
    else if (marks >= 70){
        printf("first class");
    }
    else {
        printf("fail");
    }
    return 0;

}