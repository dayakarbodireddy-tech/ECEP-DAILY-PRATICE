#include<stdio.h>
union daya
{
    int a;
    float r;
    char ch;
    
    //double d;
};
int main()
{
    union daya b;
    {
        printf("size:%zu\n",sizeof(b));
        b.a=10;
        b.r=19.6;
        b.ch='a';
        //b.d=20.65;

    }
    printf("%c\n",b.ch);
}