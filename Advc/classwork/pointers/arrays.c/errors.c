#include<stdio.h>
void scan_array(int *ptr);
void print_array(int *ptr);
int main()
{
 int arr[5];
 scan_array(arr);
 print_array(arr);
}
void scan_array(int *ptr)
{
    printf("enter the array elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",ptr+i);
    }
}
void print_array(int *ptr)
{
    printf("th elements are \n");
    for(int i=0;i<5;i++)
    printf("%d\n",*(ptr+i));
}