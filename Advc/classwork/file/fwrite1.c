#include<stdio.h>
int main()
{
    FILE *fp=fopen("daya.bin","wb");
    if(fp==NULL)
    {
        printf("file is not there\n");
        return 0;
    }
    int arr[5]={10,20,30,40,50};
    fwrite(arr,sizeof(arr[0]),5,fp);
    fclose(fp);
    return 0;
    
}