//WAP to insert new value in the array at the right position without taking a extra array(sorted list) i/p=size=10  arr=4 9 12 17 20  new_element=15
#include<stdio.h>
void insert(int arr[],int size);
int main()
{
    int size=10;
    int arr[10]={4,9,12,17,20};
    insert(arr,size);
    return 0;
} 
void insert(int arr[],int size)
{
    int new_value=10;
    // int start=2;
    // int end=size-1;
    //while(start<end)
    // int temp=arr[5];
    arr[5]=arr[4];
    arr[4]=arr[3];
    arr[3]=arr[2];
    

    arr[2]=new_value;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}