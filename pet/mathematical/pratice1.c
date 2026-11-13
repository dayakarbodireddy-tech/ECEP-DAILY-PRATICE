//Check whether a number is an abundant number. Sum of proper/perfect divisors > number; abundance =
//sum - number. Example output: 18 is abundant number; print num, sum and abundance
// #include<stdio.h>
// int main()
// {
//     int num1;
//     printf("Enter the number : ");
//     scanf("%d",&num1);
//     int sum=0;
//     for(int i=1;i<num1;i++)
//     {
//         if(num1%i==0)
//         {
//             sum=sum+i;
//         }
//     }
//     printf("num is %d\n",num1);
//     printf("sum is %d\n",sum);
//     int abundance=sum-num1;
//     if(sum>num1)
//     {
//        printf("%d number is abundant\n",num1);
//        printf("abundance is %d\n",abundance);
       
      
//     }else
//     {
//         printf("given number is not abundant number\n");
//     }
// }


//Find the second largest digit in a number.
// #include<stdio.h>
// int main()
// {
//     int num1;
//     printf("Enter the number 1 : ");
//     scanf("%d",&num1);
//     int largest=-1;
//     int second_largest=-1;
//     while(num1!=0)
//     {
//         int digit=num1%10;
//         if(digit>largest)
//         {
//             second_largest=largest;
//             largest=digit;
//         }else{
//             if(digit<largest && digit>second_largest)
//             {
//                 second_largest=digit;
//             }
//         }
//         num1=num1/10;
//     }
//     printf("second largest digit is %d\n",second_largest);

// Find the even sum in a number.

// if(num1<0)
// {
//     printf("Invalid input\n");
//     return 0;
// }
// int sum=0;
//    while(num1!=0)
//    {
//     int digit=num1%10;
//     if(digit %2 ==0)
//     {
//       sum=sum+digit;
//     }
//     num1=num1/10;
//    }
//    printf("Even sum in a number %d\n",sum);

// }


// Find the sum of all even digits in a number and repeatedly reduce the sum to a single 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         if(digit%2==0)
//         {
//             sum=sum+digit;
//         }
//         num=num/10;
//     }
//     int sum1=0;
//     while(sum>9)
//     {
//         while(sum!=0)
//         {
//             int digit1=sum%10;
//             sum1=sum1+digit1;
//             sum=sum/10;
//         }
//         sum=sum1;
//     }
//     printf("sum is %d\n",sum);
// }

// Find the sum of n odd natural numbers and display the odd numbers too.
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n: ");
//     scanf("%d",&n);
//     int sum=0;
//     int count=0;
//     for(int i=1;count<n;i++)
//     {
//       if(i%2!=0)
//       {
//         printf("%d ",i);
//         count++;
//         sum=sum+i;
//       }
//     }
//     printf("\n");
//     printf("sum is %d\n",sum);
// }


// Find the smallest positive number missing from an unsorted array.
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size :");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int found=0;
//     for(int i=1;;i++)
//     {
//        found=0;
//        for(int j=0;j<size;j++)
//        {
//         if(arr[j]==i)
//         {
//             found=1;
//             break;
//         }
//        }
//        if(found==0)
//        {
//         printf("smallest missing number is %d\n",i);
//         return 0;
//        }
//     }
// }

//. Print palindromes in a range (example 100 to 200: 101, 111, 121, ...).
// #include<stdio.h>
// int main()
// {
//     int num1;
//     printf("Enter the start_number : ");
//     scanf("%d",&num1);
//     int num2;
//     printf("Enter the end_number : ");
//     scanf("%d",&num2);
    
//     for(int i=num1;i<=num2;i++)
//     {
//         int temp=i;
//         int rev=0;
//         while(temp!=0)
//         {
//             rev=rev*10 + temp%10;
//             temp=temp/10;
//         }
//         if(i==rev)
//         {
//             printf("%d ",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

//Print numbers that are both prime and palindrome within a range.
// #include<stdio.h>
// int main()
// {
//     int num1;
//     printf("Enter the start_number : ");
//     scanf("%d",&num1);
//     int num2;
//     printf("Enter the end_number : ");
//     scanf("%d",&num2);
//     int flag=1;
//     int sum=0;
//     int previous_prime=-1;
//     for(int i=num1;i<=num2;i++)
//     {
//         if(i<2)
//         {
//             continue;
//         }
//         flag=1;
//         for(int j=2;j<i;j++)
//         {
//            if(i%j==0)
//            {
//             flag=0;
//             break;
//            }
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


//Print N prime numbers.
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n : ");
//     scanf("%d",&n);
//     int count=0;
//     int flag=1;
//     for(int i=2;count<n;i++)
//     {
//        flag=1;
//        for(int j=2;j<i;j++)
//        {
//         if(i%j==0)
//         {
//             flag=0;
//             break;
//         }
//        }
//        if(flag==1)
//        {
//         printf("%d ",i);
//         count++;
//        }
//     }
//     printf("\n");
//     return 0;
// }
  

// Print palindrome-prime numbers up to N.
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the n: ");
//     scanf("%d",&n);
//     int count=0;
//     int flag=1;
//     for(int i=2;count<n;i++)
//     {
//         flag=1;
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
//             int rev=0;
//             int temp=i;
//             while(temp!=0)
//             {
//                 rev=rev*10+temp%10;
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
//Calculate the number of seconds in a given number of years using a MACRO, assuming 365 days/year
#include<stdio.h>
#define no_of_seconds (365*24*60*60)
int main()
{
  int n;
  printf("Enter the years : ");
  scanf("%d",&n);
  long long int seconds=n*no_of_seconds;
  printf("%lld\n",seconds);
  
}