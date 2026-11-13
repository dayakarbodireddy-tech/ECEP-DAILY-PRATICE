// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the number : ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     //finding smallest missing positive number
//     int found=0;
    
//     for(int i=1;;i++)
//     {
//          found=0;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[j]==i)
//             {
//                 found=1;
//                 break;
//             }
//         }
//         if(found==0)
//         {
//             printf("The smallest missing positive number is %d\n",i);
//             return 0;
//         }
//     }
// }
