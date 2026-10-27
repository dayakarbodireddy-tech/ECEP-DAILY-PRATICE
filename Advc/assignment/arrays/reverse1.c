#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int rev=0;
    if(n==0)
    {
        return;
    //printf("%d ",rev);
    }else{
       printf("%d",n%10);
       reverse(n/10);
    }
}