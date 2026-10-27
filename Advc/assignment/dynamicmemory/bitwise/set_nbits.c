#include<stdio.h>
void set_nbits(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    set_nbits(num);
    return 0;
}
void set_nbits(int num)
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int mask=1;
    num=num|(mask<<n)-1;
    //printf("%d %d\n",n,num);
    for(int i=31;i>=0;i--)
    {
        if(num & (1<<i))
        {
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
}