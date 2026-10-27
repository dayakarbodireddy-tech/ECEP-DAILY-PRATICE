#include <stdio.h>
int main()
{
    int age,voter_id,voter_list;
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the voter_id:");
    scanf("%d",&voter_id);
    printf("enter the voter_list");
    scanf("%d",&voter_list);
    if (age >= 18){
        if(voter_id == 1){
           if (voter_list == 1){
            printf("person is eligible for vote\n");
           }else{
            printf("person is not eligible for vote\n");
           }
        } else {
            printf("person dont have voter id\n");
        }
    } else {
        printf("person is minor not eligible\n");
    }
    return 0;
}
        