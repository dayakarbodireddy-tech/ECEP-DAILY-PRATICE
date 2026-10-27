// #include<stdio.h>
// int armstrong(int n)
// {
//     int sum=0,i,count=0;
//     int remainder;
//     int x=n,temp=n;
//     while(temp>0)
//     {
//         count++;
//         temp=temp/10;
//     }
//     //armstrong sum
//     temp=x;
//     while(temp>0)
//     {
//     int power=1;
//     remainder=temp%10;
//     for(i=1;i<=count;i++)
//     {
//         power=power*remainder;
//     }
//     sum=sum+power;
//     temp=temp/10;
// }
//     if(x==sum)
//     {
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main()
// {
//     int result=armstrong(178);
//     if(result)
//     {
//         printf("armstrong number");
//     }else{
//         printf("not armstrong number");
//     }
//     return 0;
// }

