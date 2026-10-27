#include<stdio.h>
int main()
{
  int size;
  int size1;
  printf("enter the size: ");
  scanf("%d",&size);
  printf("enter the size2: ");
  scanf("%d",&size1);
  int arr[size];
  int arr1[size1];
  printf("enter the array elements: ");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the array elements2: ");
  for(int i=0;i<size1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  //unsorting to sorting
  int i,j,temp;
  for(i=0;i<size-1;i++)
  {
    for(j=0;j<size-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  //sorting second array
  for(i=0;i<size1-1;i++)
  {
    for(j=0;j<size1-1-i;j++)
    {
      if(arr1[j]>arr1[j+1])
      {
        temp=arr1[j];
        arr1[j]=arr1[j+1];
        arr1[j+1]=temp;
      }
    }
  }
   //finding median for two sorted arrays
   float median1;
   if(size%2!=0)
   {
    median1=arr[size/2];
    printf("median1 is %g\n",median1);
   }else{
    median1=(arr[size/2 -1]+arr[size/2])/2.0;
    printf("median1 is %g\n",median1);
   }
   //second median
   float median2;
   if(size1%2!=0)
   {
    median2=arr1[size1/2];
    printf("median2 is %g\n",median2);
   }else{
    median2=(arr1[size1/2 -1]+arr1[size1/2])/2.0;
    printf("median 2 is %g\n",median2);
   }
   float average;
   average=median1+median2;
   printf("average is %g\n",average);
   return 0;

}