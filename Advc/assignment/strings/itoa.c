#include <stdio.h>

void itoa(int num, char str[]);

int main()
{
    int num;
    char str[10];
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    itoa(num, str);
    
    printf("Integer to string is %s", str);
}
void itoa(int num,char str[])
{
    int i=0;
    int sign=1;
    if(num<0)
    {
        sign=-1;
        num=-num;
    }
    if(num==0)
    {
        str[i]=0;
        return;
    }
    while(num!=0)
    {
        str[i]=num%10+'0';
        num=num/10;
        i++;
    }
    str[i]='\0';
    printf("%s\n", str);
    //reversing 
    int start=0;
    int end=i-1;
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    
}