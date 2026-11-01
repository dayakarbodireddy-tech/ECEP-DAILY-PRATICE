#include<stdio.h>
int asecnding(int n1,int n2)
{
    return n1 > n2;
}
int decendig(int n1,int 2)
{
    return n1 < n2;
}
void q_sort(int *arr,int size_arr,int size_element,int (*f)(int ,int))
{
    for(int int i=0;i<size_arr-1;i++)
    {
        for(int j=0;j<size_arr-i-1;j++)
        {
            if(fptr(arr[j],arr[j+1]))
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size_arr=5;
    q_sort(arr,size_arr,asecnding);
    printf("print the array elements:\n");
    for(int i=0;i<size_arr;i++)
    {
        printf("%d ",arr[i]);
    }
}