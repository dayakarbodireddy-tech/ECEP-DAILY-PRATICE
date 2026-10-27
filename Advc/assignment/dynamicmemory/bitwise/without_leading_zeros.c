#include<stdio.h>
void no_zero_leading(int num);
int main()
{
   int num;
   printf("enter the num: ");
   scanf("%d",&num);
   no_zero_leading(num);
   return 0;
}
void no_zero_leading(int num)
{
    int mask=1;
    int flag=0;
    for(int i=31;i>=0;i--)
    {
        if(num & mask<<i)
        {
            printf("1 ");
            flag=1; 
            
        }else if(flag){
            printf("0 ");
        }
    }
    if(flag==0)
    {
        printf("0 ");
    }
}