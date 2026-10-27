#include<stdio.h>
int main()
{
    FILE *fp=fopen("daya.bin","rb");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 0;
    }
    int arr[5];
    int count=fread(arr,sizeof(arr[0]),5,fp);
    printf("items count is %d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}