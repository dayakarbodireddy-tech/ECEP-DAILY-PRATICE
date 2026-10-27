#include<stdio.h>
void count_ones(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("%032b\n",num);
    
    count_ones(num);
    return 0;
}
void count_ones(int num)
{
    //int count=0;
    int mask=1;
  for(int i=31;i>=0;i--)
  {
    if(num & (1<<i))
    {
        printf("1 ");
    }else{
        printf("0 ");
    }
  }
  printf("\n");
}