#include<stdio.h>
int even_odd(int );
int main()
{
    int x;
    printf("Enter the num: ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Invalid input");
        return 0;
    }
    int ret=even_odd(x);
    if(ret)
    {
        printf("even is %d",x);
    }else{
        printf("odd is %d",x);
    }
}
int even_odd(int x)
{
    if(x<0)
    {
        even_odd(x%2==0);
        
            return 1;
    }else{
        return 0;
    }
        
    
}