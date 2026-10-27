#include<stdio.h>
void arthimatic(int *ptr[],int size,int n1,int n2)
{
    *ptr[0]=n1+n2;
    *ptr[1]=n1-n2;
    *ptr[2]=n1*n2;
    *ptr[3]=n1/n2;
}
int main()
{
    int n1=10;
    int n2=30;
    int sum=0;
    int diff=0;
    int product=0;
    int div=0;
    int size=4;
    int *arr[size];
    arr[0]=&sum;
    arr[1]=&diff;
    arr[2]=&product;
    arr[3]=&div;
    arthimatic(arr,3,n1,n2);
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr[i]));
    }
    
}