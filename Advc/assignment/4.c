#include<stdio.h>
int main()
{  
    int arr[];
    float median( arr[],size);

    // int arr1[5]={3,2,8,5,4};
    //int arr2[5]={12,3,7,8,5};
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp=arr1[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
           
        }
    
    if(size%2!=0)
    {
        return arr[size/2];
    }else{
        return(arr(size-1/2)+arr(size/2));
    }
}
int main(void)
{
    int arr[5]={3,2,8,5,4};
    if(arr[5/2]+arr[5-1/2])
    {
        printf("median .%.2f",arr,size);
    }
    return 0;
}
     
     
     
}