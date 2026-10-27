#include<stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    static int a=0,b=1;
    int next;
    if(a<n)
    {
        return;
    }else{
        printf("%d ",a);
        if(a==n)
        return;
        next=a-b;
        a=b;
        b=next;
        if(b<next)
        {
            return;
        }
       fibonacci(n);
    }

}