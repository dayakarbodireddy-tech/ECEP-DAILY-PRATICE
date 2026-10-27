#include<stdio.h>
void get_nbits(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    get_nbits(num);
    return 0;
}
void get_nbits(int num)
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int mask=1;
    num=num & ((mask<<n)-1);
    //printf("%d %d\n",n,num);
    for(int i=31;i>=0;i--)
    {
        if(num & (mask<<i))
        {
        printf("1 ");
    }else{
        printf("0 ");
    }
}
printf("\n");

}