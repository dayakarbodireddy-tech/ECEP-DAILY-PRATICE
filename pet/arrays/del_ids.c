// Delete duplicate IDs from an array. Example: {"B25", "B25", "A56", "E89", "A56"} fi {"B25", "A56", "E89"}
#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    char arr[size][20];
    printf("Enter the array ids : ");
    for(int i=0;i<size;i++)
    {
        scanf("%s",arr[i]);
    }
    int uniq_size=0;
    char uniq[size][20];
    //checking ids 
    int duplicate=0;
    for(int i=0;i<size;i++)
    {
      duplicate=0;
      for(int j=0;j<uniq_size;j++)
      {
        if(strcmp(arr[i],uniq[j])==0)
        {
            duplicate=1;
            break;
        }
      }
      if(!duplicate)
      {
        strcpy(uniq[uniq_size],arr[i]);
        uniq_size++;
      }
    }
    printf("Uniq ids are : ");
    for(int k=0;k<uniq_size;k++)
    {
        printf("%s ",uniq[k]);
    }
    printf("\n");
    return 0;
}