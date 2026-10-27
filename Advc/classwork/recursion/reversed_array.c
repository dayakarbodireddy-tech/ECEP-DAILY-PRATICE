#include<stdio.h>
void palindrome(int arr[],int i,int size);

int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    palindrome(arr,0,size);
    return 0;

}
void palindrome(int arr[],int i,int size)
{
    if(i>=size/2)
    {
        printf("palindrome\n");
        return;
    }
    if(arr[i]!=arr[size-1-i])
    {
        printf("not palindrome\n");
        return;
    }
    palindrome(arr,i+1,size);

}
    
    