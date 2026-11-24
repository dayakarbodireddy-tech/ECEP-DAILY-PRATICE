//Swap vowels in a string. Example: "hello" fi "holle"
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j)
    {
    while(i<j && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' &&  str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
    {
        i++;
    }
    while(i<j && str[j]!='a' && str[j]!='e' && str[j]!='i' && str[j]!='o' &&  str[j]!='u' && str[j]!='A' && str[j]!='E' && str[j]!='I' && str[j]!='O' && str[j]!='U')
    {
        j--;
    }
    if(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
    printf("after swapping vowels : %s\n",str);
    return 0;

    
}