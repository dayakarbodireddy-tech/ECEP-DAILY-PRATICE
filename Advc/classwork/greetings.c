#include <stdio.h>
int main()
{
    int time;
    printf("enter the time:");
    scanf("%d",&time);
    if (time <= 12){
        printf("good morning");
    }
    else if (time <= 17){
        printf("good afternoon");
    }
    else if (time <= 22){
        printf("good evening"); 
    }
        else {
            printf("good night" );
        }
    
    return 0;

}