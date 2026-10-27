#include<stdio.h>
void squeezing(int num,int n,int pos);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    squeezing(num,n,pos);
    return 0;
}
void squeezing(int num,int n,int pos)
{
    unsigned int mask=((1<<pos)-1);
    int lower=(unsigned int)num & (mask);
    int upper=(unsigned int)num >>(pos+n);
    upper=upper<<pos;
    int result=lower | upper;
    
    printf("%d\n",result);

    

}