#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int largest=-1;
    int second_largest=-1;
    while(num!=0)
    {
        int digit=num%10;
        if(digit > largest)
        {
            second_largest=largest;
            largest=digit;
        }else{
            if(digit < largest && digit > second_largest)
            {
                second_largest=digit;
            }
        }
        num=num/10;
        
    }
    if(second_largest==-1)
    {
        printf("second largest digit is not exist\n");
    }else{
        printf("the second largest digit is %d\n",second_largest);
    }
}