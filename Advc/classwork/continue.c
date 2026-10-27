// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         if(i == 5)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }
// #include<stdio.h>//continue for 1 to 10 even numbers
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         if(i%2==1)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    // int i=1;
    // while(i<=10)
    // {
    //     if(i==5)
    //     continue;
    // printf("%d\n",i);
    // i++;
    // }
    // return 0;
    int i = 2;
    while(1)
    {
        if(i%4==0 && i%6==0)
        {
            i++;
            printf("%d\n",i);
            break;
            
        }
    }
    return 0;
}