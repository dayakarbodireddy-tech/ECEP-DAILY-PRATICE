//decimal to binary finding
#include<stdio.h>
void binary(int );
int main()
{
    int x;
    printf("Enter the num: ");
    scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int x)
{
    if(x==0)
    {
        return;
    }else{
        binary(x/2);
        printf("%d",x%2);
    }
}