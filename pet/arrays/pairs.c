// Find pairs in an array whose sum equals a target. Example: 4 3 6 7 8 1 9, target 10 fi (1,9), (6,4), (7,3).
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter the target : ");
    scanf("%d",&target);
    int sum=0;
    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
        if((arr[i] + arr[j])==target)
        {
            printf("(%d,%d)",arr[i],arr[j]);
        }
      }
    }
    printf("\n");
    return 0;
}