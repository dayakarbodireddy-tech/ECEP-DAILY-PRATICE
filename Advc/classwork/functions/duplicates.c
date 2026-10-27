#include<stdio.h>
void duplicates(int arr[],int size)
{
    int i,j;
    int dupli;
    for(i=0;i<size;i++)
    {
          dupli=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                 dupli=1;
                break;
            }
            
        }
        
        
        
        if(!dupli)
            {
                printf("%d ",arr[i]);
            }
    }
    
}
int main()
{
    int size;
    int i;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicates(arr,size);
    return 0;
}