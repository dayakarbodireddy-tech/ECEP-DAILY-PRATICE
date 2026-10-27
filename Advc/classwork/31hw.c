#include<stdio.h>
int main()
{
    // int i =1,sum=0,num;//sum of n natural numbers
    // printf("enter the number:");
    // scanf("%d",&num);
    // for(i=1;i<=num;i++)
    // {
    //     sum+=i;
    // }
    // printf("sum=%d",sum);

    // int num,fact=1;//factorial of given number
    // printf("enter the number:");
    // scanf("%d",&num);
    // for(int i=1;i<=num;i++)
    // {
    //     fact=fact*i;
    // }
    // printf("fact=%d\n",fact);

     
    // int num;//number is in range or not
    // printf("enter the number:");
    // scanf("%d",&num);
    // if((num>=0 && num<=100)||(num>=-50 && num<=70))
    // {
    //     printf("number is in range\n");
    // }else{
    //     printf("number is not in range\n");
    // }

    // char operator;//basic calculator using switch
    // printf("enter the operator:");
    // scanf(" %c",&operator);
    // switch(operator)
    // {
    //     case '+':printf("addition\n");break;
    //     case '-':printf("subtraction\n");break;
    //     case '*':printf("multiplication\n");break;
    //     case '/':printf("division\n");break;
    //     default:printf("invalid input");

    // }

    // int num;//2 power series
    // printf("enter the number:");
    // scanf("%d",&num);
    // int power=1;
    // for(int i=1;i<=num;i++)
    // {
    //     power=power*2;
       
    //     printf("power=%d\n",power);
    // }

    // int x,y; //power series of x^y
    // printf("enter the x,y:");
    // scanf("%d %d",&x,&y);
    // int power=1;
    // for(int i=1;i<=y;i++)
    // {
    //     power=power*x;
    //     printf("power=%d\n",power);
    // }

    // int year;//leap year or not
    // printf("enter the year:");
    // scanf("%d",&year);
    // if((year%400==0)||(year%4==0 && year%100!=0))
    // {
    //     printf("%d  is leap year\n",year);
    // }else{
    //     printf("the year is not leap year\n");
    // }

    // int num,i=2,count=0;//given number is prime or not
    // printf("enter the number:");
    // scanf("%d",&num);
    // if(num<=1)
    // {
    //     printf("%d is not prime",num);
    //     return 0;
    // }
    // for(i=2;i<num;i++)
    // {
    //     if(num%i==0)
    //     {
    //         count++;
    //         break;
    //     }
    // }
    // if(count==0)
    // {
    //     printf("%d is prime number\n",num);
    // }else{
    //     printf("%d is not prime number\n",num);
    // }
        

    // int num;//number is armstromg or not
    // printf("enter the number:");
    // scanf("%d",&num);
    // int x=num;
    // int remainder,sum=0;
    // while(num>0)
    // {
    //     remainder=num%10;
    //     sum=sum+(remainder*remainder*remainder);
    //     num=num/10;
    // }
    // printf("sum=%d\n",sum);
    // if(x==sum)
    // {
    //     printf("number is armstrong %d\n",x);
    // }else{
    //     printf("number is not armstrong %d",x);
    // }



    // int num;//any digit number amstrong or not
    // printf("enter the number:");
    // scanf("%d",&num);
    // int x=num,temp=num;
    // int remainder,sum=0,count_digits=0;
    // temp=num;
    // while(temp>0)
    // {
    //    count_digits++;
    //    temp=temp/10;
    // }
    // temp=num;
    // while(temp>0)
    // {
    // remainder=temp%10;
    
    // int power=1;
    // for(int i=1;i<=count_digits;i++)
    // {
    //     power=power*remainder;
    // }
    // sum=sum+power;
    // temp=temp/10;
    // printf("sum=%d\n",sum);
    // }
    // if(x==sum){
    //     printint num;
    // printf("enter the number:");
    // scanf("%d",&num);
    // int x=num,temp=num;
    // int remainder,sum=0,count_digits=0;
    // temp=num;
    // while(temp>0)
    // {
    //    count_digits++;
    //    temp=temp/10;
    // }
    // temp=num;
    // while(temp>0)
    // {
    // remainder=temp%10;
    
    // int power=1;
    // for(int i=1;i<=count_digits;i++)
    // {
    //     power=power*remainder;
    // }
    // sum=sum+power;
    // temp=temp/10;
    // printf("sum=%d\n",sum);
    // }
    // if(x==sum){f("%d is armstrong",x);
    // }else{
    //     printf("%d is not armstrong",x);
    // }

    // int num;//strongest or not
    // printf("enter the number:");
    // scanf("%d",&num);
    // int x=num,i=1,remainder,sum=0;
    // while(num>0)
    // {
    //     remainder=num%10;
    //     int fact=1;
    //     for(i=1;i<=remainder;i++)
    //     {
    //         fact=fact*i;
    //     }
    //     sum=sum+fact;
    //     num=num/10;
    //     printf("sum=%d\n",sum);
    // }
    // if(x==sum){
    //     printf("the %d is strongest",x);
    // }else{
    //     printf("the %d is not strongrst",x);
    // }

//    int num;
//    printf("enter the number:");
//    scanf("%d",&num);
//    int sum=0;
//    for(int i=1;i<=num/2;i++)
//    {
//     if(num<0)
//     {
//         printf("invalid input\n");
//     }else{
//         if(num%i==0){
//             sum=sum+i;
//         }
        
//     }
//     printf("sum=%d\n",sum);
//    }
//    if(num==sum)
//    {
//     printf("%d is perfect\n",num);
//    }else{
//     printf("%d is not perfect\n",num);
//    }


int limit=30;//prime numbers upto limit
int num,count=0,i=1;
for(num=2;num<=limit;num++)
{
    count=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    
    if(count==0)
    {
        printf("prime numbers are:%d\n",num);
    }
}
    
// int n;//to print n prime numbers
// printf("enter the n:");
// scanf("%d",&n);
// int num,i,count,found;
// for(num=2;found<n;num++)
// {
//     count=0;
//     for(i=2;i<num;i++)
//     {
//         if(num%2==0)
//         {
//             count++;
//         }
//     }
//     if(count==0)
//     {
//         printf("%d\n",num);
//         found++;
//     }
// } 

//int num,a=0,b=-1,next;//positive fibonacci series
// printf("enter the number:");
// scanf("%d",&num);
// for(int i=1;i<=num;i++)
// { 
//     printf("%d\n",a);
//     next=a-b;
//     a=b;
//     b=next;

// }

// int num,a=2,d=3,r=3;//ap series and gp series
// printf("enter the number:");
// scanf("%d",&num);
// int choice;
// printf("enter the choice:");
// scanf("%d",&choice);
// if(choice==1)
// {
//     for(int i=0;i<num;i++)
//     {
//         printf("%d\n",a);
//         a=a+d;
//     }
// }else if(choice==2)
// {
//     for(int i=0;i<num;i++)
//     {
//         printf("%d\n",a);
//         a=a*r;
//     }
// }else{
//     printf("invalid input\n");
// }


// int num;//reverse integer
// int remainder,rev=0;
// printf("enter the number:");
// scanf("%d",&num);
// while(num!=0)
// {
//    remainder=num%10;
//    rev=(rev*10)+remainder;
//    num=num/10;

// }
// printf("rev=%d\n",rev);

// int num;//given number is palindrome or not
// printf("enter the number:");
// scanf("%d",&num);
// int remainder,rev=0,x=num;
// while(num!=0)
// {
//     remainder=num%10;
//     rev=(rev*10)+remainder;
//     num = num/10;
// }
// printf("%d\n",rev);
// if(x==rev)
// {
//     printf("%d is palindrome",x);
// }else{
//     printf("%d is not palindrome",x);
// }

// int num;
// printf("enter the number:");
// scanf("%d",&num);
// int count=0;
// while(num>0)
// {
//     count++;
//     num=num/10;
// }
// printf("count=%d\n",count);

// int num,digits,result=0,position=1;
// printf("enter the number:");
// scanf("%d",&num);
// while(num>0)
// {
//     digits=num%10;
//     if(digits!=0){
//         result=result +( digits *position);
//         position=position*10;
       
//     }
//     num=num/10;
    
// }
// printf("result=%d\n",result);
    
    
 return 0;
 }



       
    
    