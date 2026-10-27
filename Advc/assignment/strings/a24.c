#include<stdio.h>
void itoa(char str[],int num);
int main()
{
    int num;
    printf("enter a number: ");
    if(scanf("%d",&num)!=1)
    {
        num=0;
    }
    char str[30];
   itoa(str,num);
   return 0;

}
void itoa(char str[],int num)
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
       str[0]='0';
       str[1]='\0';
       return;

    }
    while(num!=0)
    {
        str[i]=num%10+'0';
        i++;
        num=num/10;
        
    }
    if(sign==-1)
    {
        str[i]='-';
        i++;
    }
    str[i]='\0';
    //reverse the string 
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
    printf("%s\n",str);
}