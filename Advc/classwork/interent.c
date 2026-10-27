#include <stdio.h>
int main()
{
    int data_consumed; // in gb
    printf("enter the data_consumed:");
    scanf("%d",&data_consumed);
    if (data_consumed <= 1) {
        printf("low data usage level\n");
    } 
    else if (data_consumed <= 5){
        printf("moderate interent usage level\n");
    }
    else if (data_consumed <= 10 ){
        printf("high interent usage level\n");
    }
    else if (data_consumed > 10){
        printf("very high interent usage\n");
    }
    else {
        printf("no data usage level");
    }
    return 0;
}