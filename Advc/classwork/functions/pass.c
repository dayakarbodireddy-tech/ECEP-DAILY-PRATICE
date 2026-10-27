#include<stdio.h>
// int add_numbers(int n1,int n2)
// {
//      int sum=0;
//      sum=n1+n2;
//      return sum;
// }
// int main()
// {
//     int n1=10,n2=20,sum;
//     sum=add_numbers(n1,n2);
//     printf("%d ",sum);
//     return 0;
// }
void modify(int num)
{
   num=num+1;
}
int main()
{
    int num=10;
    printf("before modification:");
    printf("%d",num);
    modify(num);
    printf("\n");
    printf("after modofication:");
    printf("%d",num);
    return 0;
}


    
