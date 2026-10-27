// #include<stdio.h>
// int *create_array(void);
// int main()
// {
//     int *ptr;
//     ptr=create_array();
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",ptr[i]);
//     }
//     return 0;
// }
// int *create_array(void)
// {
//      static int arr[5]={10,20,30,40,50};
//     return arr;
// }
#include<stdio.h>

int main()
{
    int x=0x12345678;
    char *ptr=(char *)&x;
    if(*ptr==0x12)
    {
        printf("big ENDIAN");
    }else{
        printf("little endian");
    }
    return 0;
}