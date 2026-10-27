#include<stdio.h>
int even_odd(int num,int mask);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int mask=1;
    int ret=even_odd(num,1);
    if(ret==0)
    {
        printf("even\n");
    }else{
        printf("odd\n");
    }
    

}
int even_odd(int num,int mask)
{
    num=num&mask;
    return num;
}