#include<stdio.h>
void marks(int *ptr1[],int size);
int main()
{
    int maths,science,english;
    int *ptr[3];
    ptr[0]=&maths;
    ptr[1]=&science;
    ptr[2]=&english;
    for(int i=0;i<3;i++)
    {
        scanf("%d",ptr[i]);
    }
    marks(ptr,3);
    //printing
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(ptr[i]));
    }
}
void marks(int *ptr1[],int size)
{
    *(ptr1[0])=99;
    *(ptr1[1])=98;
    *(ptr1[2])=97;
}