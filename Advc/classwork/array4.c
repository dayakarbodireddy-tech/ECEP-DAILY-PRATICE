#include<stdio.h>//found number is there or not
int main()
{
    int arr[5];
    int i;
    printf("enter the array:");
    for( i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int value;
    
    printf("enter the value:");
    scanf("%d",&value);
    for( i=0;i<5;i++)
    {
        if(value==arr[i])
        {
            break;
        }
    }
    if(i<5){
        printf("array found in given values\n");
    }else{
        printf("array not found in given values\n");
    }
    return 0;
}