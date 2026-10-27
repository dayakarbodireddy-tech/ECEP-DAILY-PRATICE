#include<stdio.h>
int main()
{
    // int num,a=2,d=3;
    // printf("enter the number:");
    // scanf("%d",&num);
    // printf("AP series: ");
    // for(int i=0;i<num;i++)
    // {
    //     printf("%d\n",a+i*d);
    // }
    int num,a=2,r=3,i=0;
    printf("enter the number of terms:");
    scanf("%d",&num);
    int term=2;
    for(i=0;i<num;i++){
        printf("%d\n",term);
        term=term*r;
    }
    return 0;
}
    
    
      
     