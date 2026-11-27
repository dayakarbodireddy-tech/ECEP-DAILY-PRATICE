// Find the GCD of two numbers (using a function).
// #include<stdio.h>
// void gcd(int num1,int num2)
// {
//     int min=0;
//     if(num1<num2)
//     {
//         min=num1;
//     }else{
//         min=num2;
//     }
//     int gcd_of_two;
//     for(int i=1;i<=min;i++)
//     {
//         if(num1%i==0 && num2%i==0)
//         {
//             gcd_of_two=i;
//         }
//     }
//     printf("The Gcd of two numbrs is : %d\n",gcd_of_two);
// }
// int main()
// {
//     int num1;
//     printf("Enter the number1:");
//     scanf("%d",&num1);
//     int num2;
//     printf("Enter the number2:");
//     scanf("%d",&num2);
//     gcd(num1,num2);
//     return 0;
// }

//Check whether a number is a magic number or not. Example: 199 fi 1+9+9=19 fi 1+9=10 fi 1+0=1; last
//digit/result should be 1.
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number1 : ");
//     scanf("%d",&num);
//     int sum=0;
//     while(num!=0)
//     {
//         sum=sum + num%10;
//         num=num/10;
//     }
//     int sum1=0;
//     while(sum!=0)
//     {
//          sum1=sum1+sum%10;
//         sum=sum/10;
//     }
//     int sum2=0;
//     while(sum1!=0)
//     {
//         sum2=sum2+sum1%10;
//         sum1=sum1/10;
//     }
//     if(sum2==1)
//     {
//         printf("Given number is a magic number\n");
//     }else{
//         printf("Its not a magic number\n");
//     }
// }


//Check whether a number is an abundant number. Sum of proper/perfect divisors > number; abundance =
//sum - number. Example output: 18 is abundant number; print num, sum and abundance
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter the number : ");
//     scanf("%d",&num);
//     int sum=0;
//     for(int i=1;i<num;i++)
//     {
//         if(num%i==0)
//         {
//             sum=sum+i;
//         }
//     }
//     if(sum>num)
//     {
//         printf("It is a abundant number\n");
//     }else if(sum==num)
//     {
//         printf("Perfect number\n");
//     }else{
//         printf("efficient number\n");
//     }
// }


//. Find the second largest digit in a number.
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int largest=-1;
//     int second_largest=-1;
    
//     while(num!=0)
//     {
//        int digit=num%10;
//        if(digit>largest)
//        {
//         second_largest=largest;
//         largest=digit;
//        }else{
//         if(digit <largest && digit>second_largest)
//         {
//             second_largest=digit;
//         }
//        }
//        num=num/10;
//     }
//     if(second_largest==-1)
//     {
//         printf("second largest digit is not exist\n");
//      }else{
//          printf("Second largest digit in a number %d\n",second_largest);
         
//      }
    
// }

// Find the even sum in a number.
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int sum=0;
//     if(num<0)
//     {
//         printf("Invalid input\n");
//         return 0;
//     }
//     while(num!=0)
//     {
//         int digit=num%10;
//         if(digit%2==0)
//         {
//             sum=sum+digit;
//         }
//         num=num/10;
//     }
//     printf("Even sum in a number is %d\n",sum);
// }

//  Find the sum of all even digits in a number and repeatedly reduce the sum to a single digit
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int sum=0;
//     while(num!=0)
//     {
//        int digit=num%10;
//        if(digit%2==0)
//        {
//         sum=sum+digit;
//        }
//        num=num/10;
//     }
//     while(sum>9)
//     {
//         int sum1=0;
//         while(sum!=0)
//         {
//             sum1=sum1+sum%10;
//             sum=sum/10;
//         }

//         sum=sum1;
//     }
//     printf("sum is %d\n",sum);
// }

// Find the sum of n odd natural numbers and display the odd numbers too
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n:");
//     scanf("%d",&n);
//     int sum=0;
//     int count=0;
//     for(int i=1;count<n;i++)
//     {
//         if(i%2!=0)
//         {
//             count++;
//             sum=sum+i;
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     printf("sum is %d\n",sum);
//     return 0;
// }

//. Find the smallest positive number missing from an unsorted array.
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
//         int found=0;
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
//     #        printf("%d\n",i);
//             return 0;

//         }
//     }
// }


//. Find the largest palindrome in a given range.
// #include<stdio.h>
// int main()
// {
//     int start;
//     printf("Enter the start:");
//     scanf("%d",&start);
//     int end;
//     printf("Enter the end :");
//     scanf("%d",&end);
//     for(int i=end;i>start;i--)
//     {
       
//        int temp=i;
//        int rev=0;
//        while(temp!=0)
//        {
//         int remainder=temp%10;
//         rev=rev*10+remainder;
//         temp=temp/10;
//        }
//        if(rev==i)
//        {
//         printf("Longest palindrome is %d\n",rev);
//         return 0;
//        }
//     }
// }


// Check whether a number is a palindrome.
// include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int temp=num;
//     int rev=0;
//     if(num<0)
//     {
//         printf("Invalid input\n");
//         return 0;
//     }
//     while(temp!=0)
//     {
//         int remainder=temp%10;
//         rev=rev*10+remainder;
//         temp=temp/10;
//     }
//     if(rev==num)
//     {
//         printf("Given number is palindrome %d\n",num);
//     }else{
//         printf("Not palindrome\n");
//     }
// }


// Print palindromes in a range (example 100 to 200: 101, 111, 121, ...)
// #include<stdio.h>
// int main()
// {
//     int start;
//     printf("Enter the number : ");
//     scanf("%d",&start);
//     int end;
//     printf("Enter the ending : ");
//     scanf("%d",&end);
//     for(int i=start;i<=end;i++)
//     {
//         int temp=i;
//         int rev=0;
//         while(temp!=0)
//         {
//             int remainder=temp%10;
//             rev=rev*10+remainder;
//             temp=temp/10;
//         }
//         if(rev==i)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// Print numbers that are both prime and palindrome within a range.
// #include<stdio.h>
// int main()
// {
//     int start;
//     printf("Enter the start number : ");
//     scanf("%d",&start);
//     int end;
//     printf("Enter the ending number : ");
//     scanf("%d",&end);
//     if(start<2)
//     {
//         printf("Invalid input\n");
//         return 0;
//     }
//     for(int i=start;i<=end;i++)
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
//         int temp=i;
//         int rev=0;
//         while(temp!=0)
//         {
//             int remainder=temp%10;
//             rev=rev*10+remainder;
//             temp=temp/10;
//         }
//         if(rev==i)
//         {
//             printf("%d ",i);
//         }
        
//     }
// }
// printf("\n");
// return 0;
// }


// Print prime numbers in a range whose consecutive prime numbers differ by 6
// #include<stdio.h>
// int main()
// {
//     int start;
//     printf("Enter the start : ");
//     scanf("%d",&start);
//     int end;
//     printf("Enter the end : ");
//     scanf("%d",&end);
//     int previous_prime=-1;
//     for(int i=start;i<=end;i++)
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
//             if(previous_prime!=-1)
//             {
//                 if(i-previous_prime==6)
//                 {
//                     printf("%d %d ",previous_prime,i);
//                 }
//             }
//             previous_prime=i;
//         }
//     }
//     printf("\n");
//     return 0;
// }

// Print N prime numbers
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n:");
//     scanf("%d",&n);
//     int count=0;
//     for(int i=2;count<n;i++)
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
//             printf("%d ",i);
//             count++;
//         }
//     }
//     printf("\n");
//     return 0;
// }

//Print palindrome-prime numbers up to N
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n : ");
//     scanf("%d",&n);
//     int count=0;
//     for(int i=2;count<n;i++)
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
//                 int remainder=temp%10;
//                 rev=rev*10+remainder;
//                 temp=temp/10;
//             }
//             if(rev==i)
//             {
//                 printf("%d ",i);
//                 count++;
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }


// Find the number of days in a given month; February should account for 28/29 days as stated in the test
// #include<stdio.h>
// int main()
// {
//     int choice;
//     printf("Enter the choice : ");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//         {
//         printf("31 days\n");
//         break;
//         }
//         case 2:
//         {
//           int year;
//           printf("Enter the year : ");
//           scanf("%d",&year);
//           if(year%400==0 ||(year%4==0 && year%100!=0))
//           {
//             printf("29 days\n");

//           }else{
//             printf("28 days\n");
//           }
//           break;
//         }
//         default:printf("Invalid Input\n");
//     }
// }

//Calculate the number of seconds in a given number of years using a MACRO, assuming 365 days/year.
// #include<stdio.h>
// #define seconds_in_year (365*24*60*60)
// int main()
// {
//     int n;
//     printf("Enter the years: ");
//     scanf("%d",&n);
//     long long int seconds=seconds_in_year*n;
//     printf("%lld\n",seconds);
// }



//arrays

//1. Find common elements in two arrays.
// #include<stdio.h>
// int main()
// {
//     int size1;
//     printf("Enter the size1:");
//     scanf("%d",&size1);
//     int arr1[size1];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     int size2;
//     printf("Enter the size2:");
//     scanf("%d",&size2);
//     int arr2[size2];
//     printf("Enter the array2 elements : ");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
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
//                 }
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }
  

//  Delete duplicate IDs from an array. Example: {"B25", "B25", "A56", "E89", "A56"} fi {"B25", "A56", "E89"}
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
//     int duplicate=0;
//     int k=0;
//     for(int i=0;i<size;i++)
//     {
//         duplicate=0;
//         for(int j=0;j<k;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 duplicate=1;
//                 break;
//             }
//         }
//         if(duplicate==0)
//         {
//             arr[k]=arr[i];
//             k++;
//         }
//     }
//  printf("After removing dupliactes : ");
//  for(int i=0;i<k;i++)
//  {
//     printf("%d ",arr[i]);
//  }
//  printf("\n");
//  return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     char arr[size][20];
//     printf("Enter the array elements:");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%19s",arr[i]);
//     }
//     int dupliacte=0;
//     int k=0;
//     for(int i=0;i<size;i++)
//     {
//         dupliacte=0;
//         for(int j=0;j<k;j++)
//         {
//             if(strcmp(arr[i],arr[j])==0)
//             {
//                 dupliacte=1;
//                 break;
//             }
//         }
//         if(dupliacte==0)
//         {
//             strcpy(arr[k],arr[i]);
//             k++;
//         }
//     }
//     for(int i=0;i<k;i++)
//     {
//         printf("%s ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Find the second largest element in an array.

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
//     int second_largest=smallest;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<largest && arr[i]>second_largest)
//         {
//             second_largest=arr[i];
//         }
//     }
//     printf("Second largest is %d\n",second_largest);
// }

// Find the frequency of each element in a 1D array and multiply element × frequency.
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size : ");
//     scanf("%d",&size);
//     int arr[size];
//     int visited[size];
//     printf("Enter the array elements : ");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//         visited[i]=0;
//     }
//     for(int i=0;i<size;i++)
//     {
//         if(visited[i]==1)
//         {
//             continue;
//         }
//         int count=0;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 visited[j]=1;
//             }
//         }
//         printf("%d ",count*arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

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
//     int target;
//     printf("Enter the target : ");
//     scanf("%d",&target);
//     for(int i=size-1;i>=0;i--)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if((arr[i]+arr[j])==target)
//             {
//                 printf("(%d,%d)",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }

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
//     int pos;
//     printf("Enter the position : ");
//     scanf("%d",&pos);
//     //right to left
//     int temp=arr[0];
//     for(int i=0;i<=pos-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[pos-1]=temp;
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

// Merge two arrays into a third array using pointers
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
//     int arr2[size2];
//     printf("Enter the array 2 elements : ");
//     for(int i=0;i<size2;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     int merge[size1+size2];
//     int *p=arr1;
//     int *r=arr2;
//     int *merge_arr=merge;
//     for(int i=0;i<size1;i++)
//     {
//         *(merge+i)=*(p+i);
//     }
//     for(int i=0;i<size2;i++)
//     {
//         *(merge+size1+i)=*(r+i);
//     }
//     // for(int i=0;i<size1+size2;i++)
//     // {
//     //     printf("%d ",*(merge+i));
//     // }
//     //remove dupliactes
// //     int dupliacte=0;
// //     int k=0;
// //     for(int i=0;i<size1+size2;i++)
// //     {
// //       dupliacte=0;
// //       for(int j=0;j<k;j++)
// //       {
// //         if(merge[i]==merge[j])
// //         {
// //             dupliacte=1;
// //             break;
// //         }
// //       }
// //       if(dupliacte==0)
// //       {
// //         merge[k]=merge[i];
// //         k++;
// //       }
//     }
//     for(int i=0;i<k;i++)
//     {
//         for(int j=0;j<k-1;j++)
//         {
//             if(merge[j]>merge[j+1])
//             {
//                 int temp=merge[j];
//                 merge[j]=merge[j+1];
//                 merge[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<k;i++)
//     {
//         printf("%d ",merge[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Sort an array in descending order without using bubble sort.
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
//     for(int i=0;i<size;i++)
//     {
//         int second_largest=smallest;
//         for(int j=0;j<size;j++)
//         {
//             if(arr[j]<largest && arr[j]>second_largest)
//             {
//                 second_largest=arr[j];
//             }
//         }
//         printf("%d ",largest);
//         largest=second_largest;
//     }
//     printf("\n");
//     return 0;
// }

//move zeroes to last 
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
//     int j=size-1;
//     for(int i=size-1;i>=0;i--)
//     {
//         if(arr[i]!=0)
//         {
//             arr[j]=arr[i];
//             j--;
//         }
//     }
//     while(j>=0)
//     {
//         arr[j]=0;
//         j--;
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//Given two arrays, print 'yes' if they are mirror images of each other, otherwise 'no', using a function.
//Examples include {1,2,3,4} and {4,3,2,1}
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
//     int size1;
//     printf("Enter the size 1: ");
//     scanf("%d",&size1);
//     if(size!=size1)
//     {
//         printf("It is not mirror images\n");
//         return 0;
//     }
//     int arr1[size1];
//     printf("Enter the array1 elements : ");
//     for(int i=0;i<size1;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     int count=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==arr1[size1-1-i])
//         {
//             count++;
//         }
//     }
//     if(count==size)
//     {
//         printf("It is a mirror image\n");
//     }else{
//         printf("It is not a mirror image\n");
//     }
// }