// // #include<stdio.h>
// // int main()
// // {
// //     int num;
// //     printf("enter the number:");
// //     scanf("%d",&num);
// //     int i=2;
// //     for(i=2;i<num;i++)
// //     {
// //         if(num%i==0)
// //         {
// //             printf("not prime");
// //             break;
// //         }
        
// //     }
// //     if(num==i)
// //     {
// //         printf("given  number is  prime");
// //     }

    
// //     return 0;
// // }


// #include<stdio.h>
// int main()
// {
//     int limit=30;
//     int num,i,count=0;
    
//     for(num=2;num<=limit;num++)
//     {
//         count=0;
    
//     for(i=2;i<num;i++)
//     {
//         if(num%i==0)
//         {
//             count++;
            
//         }
//     }
//     if(count==0){
       

//         printf("%d \n ",num);
//     }
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
     char a = 128;
    //unsigned char b = 257;
    printf("%d\n",a);
    //printf("%lu\n",b);
    return 0;
}