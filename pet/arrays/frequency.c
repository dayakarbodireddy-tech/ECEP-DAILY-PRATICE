// Find the frequency of each element in a 1D array and multiply element × frequency.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    int visited[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("%d ",count*arr[i]);
    }
    printf("\n");
    return 0;
}