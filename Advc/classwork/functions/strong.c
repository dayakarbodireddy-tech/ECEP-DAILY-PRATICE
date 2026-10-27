#include<stdio.h>
int strong(int n)
{
   int remainder,sum=0,i;
   int x=n;
   while(n>0)
   {
    int fact=1;
    remainder=n%10;
    for(i=1;i<=remainder;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
   }
   if(x==sum)
   {
    return 1;
   }else{
    return 0;
   }
}
int main()
{
  int result = strong(153);
  if(result)
  {
    printf("strong number");
  }else{
    printf("not strong number");
  } 
  return 0;
}

    



