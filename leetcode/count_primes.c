#include<stdio.h>
int countPrimes(int n);
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    int ret=countPrimes(n);
    printf("count of primes is : %d\n",ret);
    return 0;
}
int countPrimes(int n) {
    if(n<2)
    {
        return 0;
    }
    int count=0;
    for(int i=2;i<n;i++)
    {
        int flag=1;
      for(int j=2;j<i;j++)
      {
        if(i%j==0)
        {
            flag=0;
            break;
        }
      }
      if(flag==1)
      {
        count++;
      }
    }
    return count;
}