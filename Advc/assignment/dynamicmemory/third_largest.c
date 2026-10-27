#include<stdio.h>
#include<stdlib.h>
int second_largest(int *ptr1);
int main()
{
    int *ptr=malloc(5*sizeof(int));
    printf("enter the integers: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    int ret=second_largest(ptr);
    printf("third largest is %d\n",ret);
    free(ptr);
    return 0;
    

}
int second_largest(int *ptr1)
{
    int largest=ptr1[0];
    for(int i=0;i<5;i++)
    {
        if(ptr1[i]>largest)
        {
            largest=ptr1[i];
        }
    }
    int smallest=ptr1[0];
    for(int i=0;i<5;i++)
    {
        if(ptr1[i]<smallest)
        {
            smallest=ptr1[i];
        }
    }
    //for finding second largest
    int second=smallest;
    for(int i=0;i<5;i++)
    {
      
        if(ptr1[i]<largest && ptr1[i]>second)
        {
            second=ptr1[i];
        }
      
    }
    int third=smallest;
    for(int i=0;i<5;i++)
    {
        if(ptr1[i]<second && ptr1[i]>third)
        {
            third=ptr1[i];
        }
    }
    return third;
    
}