#include <stdio.h>
int main()
{
    

    char choice;
   
    printf("enter the choice:");
    scanf("%c",&choice);
    switch(choice){
       
        case 'a': printf("a is vowel\n");
           break;
        case 'b':printf("e is vowel\n");
           break;
        case 'c':printf("i is vowel \n");
        break;
        case 'd':printf("o is vowel");
        break;
        case 'u':printf("u is vowel\n");
        break;
        default:printf("character is not vowel");


    }
    return 0;

    
}