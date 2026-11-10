//Calculate the number of seconds in a given number of years using a MACRO, assuming 365 days/year
#include<stdio.h>
#define seconds_in_n_years (365ll * 24 * 60 * 60)
int main()
{
    int n;
    printf("Enter n of years : ");
    scanf("%d",&n);
    long long seconds=n * seconds_in_n_years;
    printf("The seconds in an of years is %lld\n",seconds);
    return 0;
}
