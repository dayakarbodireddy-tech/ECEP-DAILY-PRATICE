#include<stdio.h>
void palindrome(int str[],int size,int i);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int str[size];
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&str[i]);
    }
    int i;
    palindrome(str,size,0);
    return 0;
}
void palindrome(int str[],int size,int i)
{
    if(i>=size/2)
    {
        printf("palindrome");
        return;
    }
    
        if(str[i]!=str[size-1-i])
        {
            printf("not palindrome");
            return;
        }
    
    palindrome(str,size,i+1);
}

    