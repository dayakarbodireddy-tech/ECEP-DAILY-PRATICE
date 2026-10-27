// // #include<stdio.h>
// // int main()
// // {
// //     int nth_day,start_day;
// //     int day;
// //     printf("Enter the nth day and start day: ");
// //     scanf("%d %d",&nth_day,&start_day);
// //     if(nth_day>=1&&nth_day<=365&&start_day>=1&&start_day<=7)
// //     {
// //         day=(start_day+nth_day-1)%7;
// //         if(day==0)day=7;
// //     switch(day)
// //     {
// //         case 1:printf("MONDAY");break;
// //         case 2:printf("TUESDAY");break;
// //         case 3:printf("wednesday");break;
// //         case 4:printf("thursday");break;
// //         case 5:printf("friday");break;
// //         case 6:printf("saturday");break;
// //         case 7:printf("sunday");break;
// //         default:printf("no week day it is ");
// //     }
// // }
// //     else if(nth_day<=0&&nth_day>365)
// //     {
// //         printf("invalid");
// //     }else{
// //         printf("Invalid 1");
// //     }
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the num:");
//     scanf("%d",&n);
//     int a=0,b=1;
//     int next;
//     if(n<0)
//     {
//         printf("invalid input");
//         return 0;
//     }
//     //for(int i=0;i<n;i++)
//     while(a<=n)
//     {
//         printf("%d ",a);
//         next=a+b;
//         a=b;
//         b=next;

//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the n:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             sum=sum+i;
//         }
//     }
//     //printf("%d ",sum);
//     if(n==sum)
//     {
//         printf("perfect number");
//     }else{
//         printf("not perfect");
//     }
//     return 0;
// }
#include<stdio.h>