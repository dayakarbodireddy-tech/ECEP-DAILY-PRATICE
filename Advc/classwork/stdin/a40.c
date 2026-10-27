#include<stdio.h>
void wc_command(int ch,int character_count,int line_count,int word_count);
int main()
{
    int ch;
    int character_count=0;
    int line_count=0;
    int word_count=0;
    wc_command(ch,character_count,line_count,word_count);
    return 0;
}
void wc_command(int ch,int character_count,int line_count,int word_count)
{
    int flag=0;
    while((ch=getchar())!=EOF)
    {
        character_count++;
        if(ch=='\n')
        {
            line_count++;
        }
        if(ch==' '|| ch=='\t'||ch=='\n')
        {
           flag=0;
        }else if(flag==0)
        {
           word_count++;
           flag=1;
        }
    }
    printf("character count is %d\n",character_count);
    printf("line count is %d\n",line_count);
    printf("word count is %d\n",word_count);
}