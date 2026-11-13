// Given two arrays, print 'yes' if they are mirror images of each other, otherwise 'no', using a function.
//Examples include {1,2,3,4} and {4,3,2,1}.
#include<stdio.h>
int main()
{
    int size1;
    printf("Enter the size : ");
    scanf("%d",&size1);
    int arr1[size1];
    int size2;
    printf("Enter the size2 : ");
    scanf("%d",&size2);
    if(size1!=size2)
    {
        printf("These arrays are not mirror images\n");
        return 0;
    }
    printf("Enter the array elements : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
        
    
    int arr2[size2];
    printf("Enter the array2 elements : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    
    int count=0;
    for(int i=0;i<size1;i++)
    {
        
        
            if(arr1[i]==arr2[size2-1-i])
            {
               count++;
               
            }
            
        
    }
    if(count==size1)
    {
        printf("both arrays are mirror images\n");
    }else{
        printf("both arrays are not mirror images\n");
    }
    

}