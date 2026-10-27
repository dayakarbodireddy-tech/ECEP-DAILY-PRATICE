#include<stdio.h>
int main()
{
    int arr[7]={2,4,3,5,7,8,9};
    int n=7,i,j,sum=7;
    // printf("enter the N:");
    // scanf("%d",&n);

    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i]+arr[j]==sum){
               
                printf("(%d,%d)",arr[i],arr[j]);
            }
            
        }
        printf("\n");
    }
    return 0;
        
            
}