//checking palindrome or not
#include<stdio.h>
void palindrome(char str[]);
int main()
{
    char str[30];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    palindrome(str);
    return 0;

}
void palindrome(char str[])
{
    int i=0;
    //int ispalindrome=1;
    while(str[i]!='\0')
    {
        i++;
    }
    int size=0;
    while(size<i/2)
    {
        if(str[size]!=str[i-1-size])
        {
            //ispalindrome=0;
            break;
        }
        size++;
    }
    if(size==i/2)
    {
        printf("string is palindrome\n");
    }else{
        printf("string is not palindrome");
    }
}
