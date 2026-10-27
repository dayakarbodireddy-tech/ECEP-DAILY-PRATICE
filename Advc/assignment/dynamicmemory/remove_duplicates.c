#include<stdio.h>
#include<stdlib.h>
void duplicate_removing(int *ptr1,int *ptr2,int size,int *uniq_size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int *arr1=malloc(size*sizeof(int));
    printf("read the integers from user:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int *uniq_arr=malloc(size*sizeof(int));

    int uniq_size=0;
    duplicate_removing(arr1,uniq_arr,size,&uniq_size);
    free(arr1);
    free(uniq_arr);
    return 0;
}
void duplicate_removing(int *ptr1,int *ptr2,int size,int *uniq_size)
{
    int is_duplicate=0;
    for(int i=0;i<size;i++)
    {
        is_duplicate=0;
        for(int j=0;j<*uniq_size;j++)
        {
            if(ptr1[i]==ptr2[j])
            {
                is_duplicate=1;
                break;
            }
        }
        if(!is_duplicate)
        {
            ptr2[*uniq_size]=ptr1[i];
            (*uniq_size)++;
        }
    }
    printf("%p\n",ptr1);
    printf("%p\n",ptr2);
    printf("after removing dulpicate:\n ");
    for(int k=0;k<*uniq_size;k++)
    {
        printf("%d ",ptr2[k]);
    }
    
    
}