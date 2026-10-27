#include<stdio.h>
int main()
{
  FILE *fp=fopen("file.txt","r+");
  if(fp==NULL)
  {
    printf("file is not there\n");
    return 0;
  }
  printf("starting position %ld\n",ftell(fp));
  fseek(fp,3,SEEK_SET);
  printf("position to replace %ld\n",ftell(fp));
  
  fprintf(fp,"hemaaaa");
  rewind(fp); 
  char ch;
  while((ch=fgetc(fp))!=EOF)
  {
    putchar(ch);
  }
  printf("\n");
  fclose(fp);
  return 0;

}