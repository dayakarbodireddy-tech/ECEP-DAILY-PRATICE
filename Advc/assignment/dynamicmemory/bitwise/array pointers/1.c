#include<stdio.h>
void fun(int* marks[],int size);
int main()
{
    
    int num1,num2,num3;
    int* marks[3];
    marks[0]=&num1;
    marks[1]=&num2;
    marks[2]=&num3;
    for(int i=0;i<3;i++)
    {
        scanf("%d",marks[i]);
    }
    fun(marks,3);
    //printing values 
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(marks[i]));
    }


}
void fun(int* marks[],int size)
{
    
    *(marks[0])=99;
    *(marks[1])=60;
    *(marks[2])=88;
    
}