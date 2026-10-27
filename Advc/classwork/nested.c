// // #include <stdio.h>
// int main()
// {
//     int cgpa,aptitude_result;
//     printf("enter  the cgpa:");
//     scanf("%d",&cgpa);
//     printf("enter the aptitude_result:");
//     scanf("%d",&aptitude_result);
//     if (cgpa >= 7){
//         if(aptitude_result == 1){
//             printf("your selected for next round\n");
//         }
//         else{
//             printf("your not selected for next round\n");
//         }
//     }
//     else {
//         printf("your not eligible for placements");
//     }
//     return 0;

//     }
#include<stdio.h>//middle number using nested if
int main()
{
    int n1,n2,n3;
    printf("enter the n1,n2,n3:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2){
        if(n1<n3){
            printf("middle number is %d\n",n1);
        }else{
            if(n3>n2){
                printf("middle number is %d\n",n3);
            }else{
                printf("middle number is %d\n",n2);
            }
        }
    }else{
        if(n2<n3){
            printf("middle number is %d\n",n2);
        }else{
            if(n3>n1){
                printf("middle number is %d\n",n3);
            }else{
                printf("middle number is %d",n1);
            }
        }
    }
    return 0;
}


    
