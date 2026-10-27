#include<stdio.h>
#include<stdlib.h>
void squeezing(char *str);
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    char *str=malloc(size*sizeof(char));
    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    squeezing(str);
    return 0;
}
void squeezing(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '|| str[i]=='\t')
        {
            if(str[i+1]==' '||str[i+1]=='\t')
            {
                int j=i;
                while(str[j]!='\0')
                {
                    str[j]=str[j+1];
                    j++;
                }
            }else{
                i++;
            }
        }else{
            i++;
        }
    }
    printf("%s\n",str);
    
}