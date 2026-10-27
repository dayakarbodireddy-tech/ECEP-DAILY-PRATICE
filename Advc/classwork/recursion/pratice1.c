// //reverse number
// #include<stdio.h>
// void reverse(int n);
// int main()
// {
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     reverse(n);
//     return 0;
// }
// void reverse(int n)
// {
//     if(n==0)
//     {
//         return;
//     }else{
//         printf("%d",n%10);
//         reverse(n/10);
//     }
// }
 //reverse array
 #include<stdio.h>
 void reverse_array(int arr[],int i,int size);
 int main()
 {
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse_array(arr,0,size);
    return 0;
 }
 void reverse_array(int arr[],int i,int size)
 {
    if(i==size)
    {
        return;
    }else{
        reverse_array(arr,i+1,size);
        printf("%d ",arr[i]);
    }
 }