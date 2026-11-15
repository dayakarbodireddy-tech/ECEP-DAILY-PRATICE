//merge two arrays 
// #include<stdio.h>
// int main()
// {
//     int size1;
//     printf("Enter the size : ");
//     scanf("%d",&size1);
//     int arr1[size1];
//     printf("Enter the array 1 elements : ");
//     for(int i=0;i<size1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     int size2;
//     printf("Enter the size2 : ");
//     scanf("%d",&size2);
//     int arr2[size1];
//     printf("Enter the array 2 elements : ");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     int arr3[size1+size2];
//     int *p=arr1;
//     int *p1=arr2;
//     int *p2=arr3;
//     for(int i=0;i<size1;i++)
//     {
//         //arr3[i]=arr1[i]
//         *(p2+i)=*(p+i);
//     }
//     for(int i=0;i<size2;i++)
//     {
//         //arr3[size1+i]=arr2[i];
//         *(p2+size1+i)=*(p1+i);
//     }
//     printf("Merged array : ");
//     for(int i=0;i<size1+size2;i++)
//     {
//         printf("%d ",*(p2+i));
//     }
//     printf("\n");
//     return 0;
// }



//gcd of two numbers
// #include<stdio.h>
// void gcd_two(int num1,int num2)
// {
//     int min=0;
//     if(num1<num2)
//     {
//         min=num1;
//     }else{
//         min=num2;
//     }
//     int gcd_is=0;
//     for(int i=1;i<min;i++)
//     {
//         if(num1%i==0 && num2%i==0)
//         {
//             gcd_is=i;
//         }
//     }
//     printf("GCD of %d and %d is %d\n",num1,num2,gcd_is);
    
// }
// int main()
// {
//     int num1;
//     printf("Enter the number : ");
//     scanf("%d",&num1);
//     int num2;
//     printf("Enter the number2 : ");
//     scanf("%d",&num2);
//     gcd_two(num1,num2);
//     if(num1 < 0 || num2 < 0)
//     {
//         printf("Error:Enter positive values\n");
//         return 0;
//     }
//     return 0;
// }

// #include<stdio.h>
// int move_zeros(int size,int arr[])
// {
//     int j=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]!=0)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     while(j<size)
//     {
//         arr[j]=0;
//         j++;
//     }
    
//     //printing values
    
    
// }
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
    
//     move_zeros(size,arr);
//     printf("After moving zeros : ");
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//second largest digit
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the num : ");
//     scanf("%d",&num);
//     int largest=-1;
//     int second_largest=-1;
//     while(num!=0)
//     {
//         int digit =num%10;
//         if(digit > largest)
//         {
//             second_largest=largest;
//             largest=digit;
//         }else{
//             if(digit<largest && digit>second_largest)
//             {
//                 second_largest=digit;
//             }
//         }
//         num=num/10;
//     }
//     printf("Second largest digit is %d\n",second_largest);
//     return 0;
// }

//n prime palindromes
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n :");
//     scanf("%d",&n);
//     //int count=0;
//     for(int i=2;i<n;i++)
//     {
//         int flag=1;
//         for(int j=2;j<i;j++)
//         {
//             if(i%j==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             int temp=i;
//             int rev=0;
//             while(temp!=0)
//             {
//                 rev=rev*10+temp%10;
//                 temp=temp/10;
//             }
//             if(i==rev)
//             {
//                 printf("%d ",i);
                
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }


//frequency
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size:");
//     scanf("%d",&size);
//     int arr[size];
//     int freq[size];
//     //int visited[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//         freq[i]=0;
//         //visited[i]=0;
//     }
    
//     for(int i=0;i<size;i++)
//     {
//         // if(visited[i]==1)
//         // {
//         //     continue;
//         // }
        
//         for(int j=0;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 freq[i]++;
//                 //visited[i]=1;
//             }
//         }
//     }
//     //sorting based on the frequency
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(freq[i]<freq[j])
//             {
//                 int temp=freq[i];
//                 freq[i]=freq[j];
//                 freq[j]=temp;
                
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }


//first 5 numbers
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n : ");
//     scanf("%d",&n);
//     int count=0;
//     printf("First %d prime numbers are : ",n);
//     for(int i=2;count<n;i++)
//     {
//         int flag=1;
//         for(int j=2;j<i;j++)
//         {
//             if(i%j==0)
//             {
//                flag=0;
//                break;
//             }
//         }
//         if(flag==1)
//         {
//             printf("%d ",i);
//             count++;
//         }
//     }
//     printf("\n");
//     return 0;
// }

//smallest positive number missing
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
//     for(int i=1;;i++)
//     {
//         int flag=1;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[j]==i)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             printf("Smallest positive number missed is %d\n",i);
//             return 0;
//         }
//     }
//     printf("\n");
//     return 0;
// }



// finding seconds in a year
// #include<stdio.h>
// #define SECONDS (365*24*60*60)
// int main()
// {
//     int n;
//     printf("Enter the N : ");
//     scanf("%d",&n);
//     printf("Seconds in a year : ");
//     long long int seconds=n*SECONDS;
//     printf("%lld\n",seconds);
// }


//digits are ascending or not 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int prev=num%10;
//     num=num/10;
//     int flag=1;
//     while(num!=0)
//     {
//         int curr=num%10;
//         if(curr>=prev)
//         {
//             flag=0;
//             break;
//         }
//         prev=curr;
//         num=num/10;
//     }
//     if(flag==1)
//     {
//         printf("Numbers digits is in ascending order\n");
//     }else{
//         printf("Numbers digits is not in ascending order\n");
//     }
// }

//equilibrium index
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the array elements : ");
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
//           left_sum=left_sum+arr[j];
//         }
//         for(int j=i+1;j<size;j++)
//         {
//             right_sum=right_sum+arr[j];
//         }
//         if(left_sum==right_sum)
//         {
//             printf("Equilibrium index found at %d\n",i);
//             return 0;
//         }
//     }
// }


//array rotate n times
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
//     int n;
//     printf("Enter the n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         int temp=arr[0];
//         for(int j=0;j<size-1;j++)
//         {
//             arr[j]=arr[j+1];
//         }
//         arr[size-1]=temp;
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//array contain dupliacte or not 
#include<stdio.h>
int duplicates(int size,int arr[])
{
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
            }
        }
    }
    if(count==0)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ret=duplicates(size,arr);
    if(ret)
    {
        printf("array does not contain dupli\n");
    }else{
        printf("Dupli is there\n");
    }
    return 0;
    
    
}
