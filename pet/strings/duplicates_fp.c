//Remove duplicate characters / perform duplicate handling using a function pointer.
#include<stdio.h>
void remove_dupliactes(char str[]);
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    //function pointer
    void (*fp)(char[]);
    fp=remove_dupliactes;
    fp(str);
    printf("After removing duplicates using function pointer :%s\n",str);
    return 0;
}
void remove_dupliactes(char  str[])
{
    int i=0,j=0;
    int duplicate=0;
    while(str[i]!='\0')
    {
        duplicate=0;
        int k=0;
       while(k<j)
       {
        if(str[i]==str[k])
        {
            duplicate=1;
            break;
        }
        k++;
       }
       if(duplicate==0)
       {
        str[j]=str[i];
        j++;
       }
       i++;
    }
    str[j]='\0';
}