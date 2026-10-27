#include<stdio.h>
int lowest_digit(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
      int ret =lowest_digit(n);
      printf("%d is lowest",ret);
    return 0;
}
int lowest_digit(int n)
{
    
    static int min=9;
    if(n==0)
    {
        return 0;
    }else{
        if(n%10<min)
        {
            min=n%10;
            lowest_digit(n/10);
           // printf("%d ",min);
            return min;
        }
    }

}