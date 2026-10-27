#include<stdio.h>
#include<stdlib.h>
void prime_or_not(int *ptr,int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("enter the num: ");
    scanf("%d",&arr[0]);
    prime_or_not(arr,size);
    free(arr);
    return 0;

}
void prime_or_not(int *ptr,int size)
{
    int count=0;
    for(int i=2;i<ptr[0];i++)
    {
        if(ptr[0]%i==0)
        {
            count++;
           break;
        }
    }
    if(count==0)
    {
        printf("number is prime\n");
    }else{
        printf("not prime\n");
    }
}