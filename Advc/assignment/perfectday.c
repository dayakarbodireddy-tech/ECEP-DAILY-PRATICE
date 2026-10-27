#include<stdio.h>
int main()
{
    int num,sum=0;
    int i=1;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0){
        printf("invalid input\n");
        
    }else{
        for(i=1;i<=num/2;i++)
        {
            if(num%i==0){
                sum+=i;
            }
            printf("sum = %d\n",sum);
        }
    }
    // int num,sum=0,i=1;
    // printf("enter the number:");
    // scanf("%d",&num);
    // for(i=1;i<=num/2;i++)
    // {
    //     if(num<0){
    //         printf("invalid input\n");
    //         break;
    //     }else{
    //         if(num%i==0){
    //             sum+=i;
    //         }
    //         printf("sum=%d\n",sum);
    //     }
    // }
    if(num==sum){
        printf("the number is %d is perfect\n",num);
    }else{
        printf("the number is %d is not perfect\n",num);
    }
    return 0;
}    
    
            