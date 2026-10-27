#include<stdio.h>
void vowel(char ch);
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    vowel(ch);
    return 0;
}
void vowel(char ch)
{
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
    {
        printf("character is a vowel %c",ch);
    }else{
        printf("character is not a vowel %c",ch);
    }
}