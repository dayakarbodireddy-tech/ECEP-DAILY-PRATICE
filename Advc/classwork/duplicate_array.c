#include<stdio.h>
int main()
{
    int uniq_size=0;
    int arr[9]={2,2,4,5,5,8,9,6,7};
    int uniq_arr[9];
    int i,j,k;
    for(i=0;i<9;i++)
    {
        int duplicates=0;
        for(j=0;j<uniq_size;j++)
        {
            if(uniq_arr[j]==arr[i])
            {
                duplicates=1;
                break;
            }
        }
        if(!duplicates)
        {
            if(uniq_arr[uniq_size]=arr[i]){
            uniq_size++;
            }
        }
    }
    printf("unique array elements are:\n");
    for(k=0;k<uniq_size;k++)
    {
        printf("%d ",uniq_arr[k]);
    }
    printf("\n");
    return 0;
}
    