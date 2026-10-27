#include<stdio.h>
void palindrome(char str[],int size,int i);
int main()
{
    int size;
    char str[30];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    int i;
    palindrome(str,size,0);
    return 0;
}
void palindrome(char str[],int size,int i)
{
    size=0;
    int is_palindrome=0;
    while(str[i]!='\0')
    {
        i++;
    }
    //static int i=0;
     while(size<i/2)
     {
        if(str[size]!=str[i-1-size])
        {
            is_palindrome=1;
            break;

        
        }
        size++;

     }
    
    if(is_palindrome==0)
    {
        printf("Yes,Entered string is palindrome.");
    }else{
        printf("No,Entered string is not palindrome.");
    }
    
}