#include<stdio.h>
void reversed(char str[],int ind,int len);
int main()
{
    char str[30];
    printf("enter a string: ");
    scanf("%[^\n]",str);
    int len;
    printf("reversed string is : ");
    reversed(str,0,len);
    return 0;
}
void reversed(char str[],int ind,int len)
{
   while(str[len]!='\0')
   {
     len++;
   }
   if(ind==len)
   {
    return;
   }else{
    reversed(str,ind+1,len);
    printf("%c",str[ind]);
   }
}
    