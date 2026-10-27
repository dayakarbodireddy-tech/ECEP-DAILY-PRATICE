#include<stdio.h>
int main()
{
    int marks[5];
    

    for(int i=1;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("the array elements are:\n");
    for(int i=1;i<5;i++)
    {
    printf("%d\n",marks[i]);
    }
    printf("\n");
    printf("%d\n",marks[-1]);

    return 0;
}