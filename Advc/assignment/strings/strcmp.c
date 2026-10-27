#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int i=0;
    int count=0;
    for(i=0;i<5;i++)
    {
        if(arr1[i]==arr2[i])
        {
            count++;
        }
    }
    if(count==5)
    {
        printf("equal\n");
    }else{
        printf("not equal\n");
    }
}