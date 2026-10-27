// #include <stdio.h>
// int main()
// {
//     printf("helloworld");
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int num,i,count,found;
    
    for(num=2;found<n;num++)
    {
        count = 0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",num);
            found++;
        }

    }
    return 0;
}