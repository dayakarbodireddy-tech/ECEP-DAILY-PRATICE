#include<stdio.h>
struct bit 
{
    int n1 : 3;
    int n2 : 3;
    int n3 : 3;
};
int main()
{
    struct bit num={14,2,1};
    printf("%d %d %d\n",num.n1,num.n2,num.n3);
}
