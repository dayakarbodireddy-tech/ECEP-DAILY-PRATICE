#include<stdio.h>
int even_odd()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //counting even and odd 
    int count1=0;
   
    for(i=0;i<size;i++)
    {
      if(arr[i]%2==0)
    {
        count1++;
    }
}
 return count1;
    
}
int main()
{
    int result=even_odd();
    printf("result is %d",result);
    return 0;
}