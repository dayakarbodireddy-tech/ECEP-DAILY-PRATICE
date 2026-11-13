//Find common elements in two arrays.
// #include<stdio.h>
// int main()
// {
//     int size1;
//     printf("Enter the size1 : ");
//     scanf("%d",&size1);
//     int arr1[size1];
//     printf("Enter the array 1 elements: ");
//     for(int i=0;i<size1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
    
//     int size2;
//     printf("Enter the size2 : ");
//     scanf("%d",&size2);
//     int arr2[size2];
//     printf("Enter the array2 elements : ");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     //finding common elements
//     for(int i=0;i<size1;i++)
//     {
//         int flag=1;
//         for(int k=0;k<i;k++)
//         {
//             if(arr1[i]==arr1[k])
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             for(int j=0;j<size2;j++)
//             {
//                 if(arr1[i]==arr2[j])
//                 {
//                     printf("%d ",arr1[i]);
//                     break;
//                 }
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }
// Delete duplicate IDs from an array. Example: {"B25", "B25", "A56", "E89", "A56"} fi {"B25", "A56", "E89"}.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int size;
//     printf("Enter the size: ");
//     scanf("%d",&size);
//     char arr[size][20];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%s",arr[i]);
//     }
//     char uniq_arr[size][20];
//     int uniq_size=0;
//     int duplicate=0;
//     for(int i=0;i<size;i++)
//     {
//         duplicate=0;
//         for(int j=0;j<uniq_size;j++)
//         {
//             if(strcmp(arr[i],uniq_arr[j])==0)
//             {
//                duplicate=1;
//                break;
//             }
//         }
//         if(!duplicate)
//         {
//             strcpy(uniq_arr[uniq_size],arr[i]);
//             uniq_size++;
//         }
//     }
//     for(int k=0;k<uniq_size;k++)
//     {
//         printf("%s ",uniq_arr[k]);
//     }
//     printf("\n");
//     return 0;
// }
// Find the extra/mismatched element in a string or array.
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     int arr1[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     int size2;
//     printf("Enter the size2 : ");
//     scanf("%d",&size2);
//     int arr2[size2];
//     printf("Enter the array2 elements : ");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     for(int i=0;i<size;i++)
//     {
//         int flag=1;
//         for(int j=0;j<size2;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             printf("%d ",arr1[i]);
//         }
//     }
//     for(int i=0;i<size2;i++)
//     {
//         int flag=1;
//         for(int j=0;j<size;j++)
//         {
//             if(arr2[i]==arr1[j])
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             printf("%d ",arr2[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }
//



//Find the equilibrium index in an array.
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
//     for(int i=0;i<size;i++)
//     {
//         int left_sum=0;
//         int right_sum=0;
//         for(int j=0;j<i;j++)
//         {
//             left_sum=left_sum+arr[j];
//         }
//         for(int j=i+1;j<size;j++)
//         {
//             right_sum=right_sum+arr[j];
//         }
//         if(left_sum==right_sum)
//         {
//             printf("Equilibrium index is %d\n",i);
//             return 0;
//         }
//     }
//     printf("we cant find equilibrium index for this array\n");
// }

//Find the second largest element in an array.
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
//     int largest=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     int smallest=arr[0];
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<smallest)
//         {
//             smallest=arr[i];
//         }
//     }
//     // int second_largest=smallest;
//     // for(int i=0;i<size;i++)
//     // {
//     //     if(arr[i]<largest && arr[i]>second_largest)
//     //     {
//     //         second_largest=arr[i];
//     //     }
//     // }
//     // printf("%d\n",second_largest);
// //     for(int i=0;i<size;i++)
// //     {
// //         int second_largest=smallest;

// //         for(int j=0;j<size;j++)
// //         {
// //            if(arr[j]<largest && arr[j]>second_largest)
// //            {
// //             second_largest=arr[j];
// //            }
// //         }
// //         printf("%d ",largest);
// //         largest=second_largest;
// //     }
// // }


//Find the frequency of each element in a 1D array and multiply element × frequency.
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     int arr[size];
//     int visted[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int count=0;
//     for(int i=0;i<size;i++)
//     {
//         if(visted[i]==1)
//         {
//             continue;
//         }
//         count=0;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 visted[j]=1;
//             }
//         }
//         printf("%d ",count * arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Find pairs in an array whose sum equals a target. Example: 4 3 6 7 8 1 9, target 10 fi (1,9), (6,4), (7,3)
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int target=10;
//     for(int i=size-1;i>=0;i--)
//     {
        
        
        
        
//         for(int j=i+1;j<size;j++)
//         {
            
        
//             if(arr[j]+arr[i]==target)
//             {
//                 printf("(%d,%d)",arr[i],arr[j]);
//                 break;
//             }
//         }
//     }
// }
