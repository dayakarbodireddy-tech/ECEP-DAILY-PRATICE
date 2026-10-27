#include<stdio.h>
int atoi(char str[]);
int main()
{
    char str[30];
    printf("enter a string: ");
    scanf("%[^\n]",str);
    int ret=atoi(str);
    printf("%d",ret);
    return 0;
}
int atoi(char str[])
{
    int i=0;
    static int num=0;
    while(str[i]!='\0')
    {
        if((str[i]>='0'&&str[i]<='9')||str[i]=='-'||str[i]=='+')
        {
            num=str[i]-'0'+num*10;
        }else{
        return num;
        }
        i++;
    }
    return num;
}