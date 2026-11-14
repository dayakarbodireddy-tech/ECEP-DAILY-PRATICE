//Find the total number of iterations/operations needed to sort an array in ascending order
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int iter_count=0;
//     int swap_count=0;
//     //sorting
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=0;j<size-1-i;j++)
//         {
//             iter_count++;
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swap_count++;
//             }
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("The iterations count to sort an array in ascending order is %d\n",iter_count);
//     printf("The swap count to sort an array in ascending order is %d\n",swap_count);
// }

