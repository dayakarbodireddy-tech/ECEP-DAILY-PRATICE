#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if((i==1 || j==1 || i==num || j==num )){
           //if((j==i || i+j == num+1 )) {//for x pattern
            
                printf("*");
           // printf("%d",j);//for numbers 
            }else{
                 printf("  ");
        }
        printf("\n");
    }
    return 0;
}
        
}