//. Given a string, check whether it contains at least one vowel; print yes/no.
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    int i=0;
    int found=0;
    while(str[i]!='\0')
    {
        
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
        {
            found=1;
            
        }
        i++;
    }
    if(found==1)
    {
        printf("Yes it contains vowels\n");
        
    }else{
        printf("NO it doesn't contain vowels\n");
    }
    
}