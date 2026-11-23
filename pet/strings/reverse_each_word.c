#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    int start=0;
    int end;
    for(end=0;end<=len;end++)
    {
        if(str[end]==' '||str[end]=='\0')
        {
            i=start;
            j=end-1;
            while(i<j)
            {
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
            }
            start=end+1;
        }
    }
    printf("Reversed string is %s",str);
    printf("\n");
    return 0;
}