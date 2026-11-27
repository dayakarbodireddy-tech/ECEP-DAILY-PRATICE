// Remove duplicate characters from a string.
// #include<stdio.h>
// int main()
// {
//     char str[20];
//     printf("Enter the string : ");
//     scanf("%s",str);
//     int duplicate=0;
//     int i=0;
//     int k=0;
//     while(str[i]!='\0')
//     {
//         int j=0;
//         duplicate=0;
//         while(j<i)
//         {
//             if(str[i]==str[j])
//             {
//                 duplicate=1;
//                 break;
//             }
//             j++;
//         }
//         if(duplicate==0)
//         {
//             str[k]=str[i];
//             k++;
//         }
//         i++;
//     }
//     str[k]='\0';
//     printf("%s\n",str);
    
//     return 0;
// }

//Remove all occurrences of a specific character from a string.
// #include<stdio.h>
// int main()
// {
//     char str[30];
//     printf("Enter the string : ");
//     scanf("%s",str);
//     char ch;
//     printf("Enter the character : ");
//     scanf(" %c",&ch);
//     int i=0;
//     int j=0;
//     while(str[i]!='\0')
//     {
//         if(str[i]!=ch)
//         {
//             str[j]=str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j]='\0';
//     printf("After removing : %s\n",str);
//     return 0;
// }

// Find the length of the last word in a string. Examples: "Hello world" fi 5; "Fly me to the moon" fi 3
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter the string : ");
//     scanf("%[^\n]",str);
//     //length
//     int len=0;
//     while(str[len]!='\0')
//     {
//         len++;
//     }
//     int end=len-1;
//     int count=0;
//     while(end>=0 && str[end]==' ')//removing tarailing spaces
//     {
//         end--;
//     }
//     while(str[end]!='\0' && str[end]!=' ')
//     {
//         count++;
//         end--;
//     }
//     printf("LAST WORD COUNT IS %d\n",count);
// }

//Find the extra character between two strings
// #include<stdio.h>
// int main()
// {
//     char str1[100];
//     printf("Enter the string : ");
//     scanf("%s",str1);
//     char str2[100];
//     printf("Enter the string2 : ");
//     scanf("%s",str2);
//     int i=0,j=0;
//     while(str1[i]!='\0')
//     {
        
//         int found=0;
//         j=0;
//         while(str2[j]!='\0')
//         {
//             if(str1[i]==str2[j])
//             {
//                 found=1;
//                 break;
//             }
//             j++;
//         }
//         if(found==0)
//         {
//             printf("%c",str1[i]);
//         }
//         i++;
//     }
//     i=0,j=0;
//     while(str2[i]!='\0')
//     {
        
//         int found=0;
//         j=0;
//         while(str1[j]!='\0')
//         {
//             if(str1[j]==str2[i])
//             {
//                 found=1;
//                 break;
//             }
//             j++;
//         }
//         if(found==0)
//         {
//             printf("%c",str2[i]);
//         }
//         i++;
//     }
//     printf("\n");
//     return 0;
    
// }

// Replace words in a string. Example from notes: string1 = "wives are knives", replacement/string2 =
//"function pointer" fi output "function are knives".
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100];
//     printf("Enter the string : ");
//     scanf("%[^\n]",str1);
//     char str2[100];
//     printf("Enter the string2 : ");
//     scanf(" %[^\n]",str2);
//     char temp1[100];
//     char temp2[100];
//     int i=0,j=0;
//     while(str1[i]!='\0' && str1[i]!=' ')
//     {
//        temp1[j]=str1[i];
//        j++;
//        i++;
//     }
//     temp1[j]='\0';
//     j=0;
//     while(str1[i]!='\0')
//     {
//         temp2[j]=str1[i];
//         j++;
//         i++;
//     }
//     temp2[j]='\0';
//     char temp3[100];
//     i=0,j=0;
//     while(str2[i]!='\0' && str2[i]!=' ')
//     {
//         temp3[j]=str2[i];
//         j++;
//         i++;
//     }
//     temp3[j]='\0';
//     //concadination of the temp3 and temp2
//     strcat(temp3,temp2);
//     printf("%s\n",temp3);
//     return 0;
    
// }


//Replace specific character sequences in a string. Sequences noted in the test: bbc fi $, bbe fi &, bb fi *
// #include<stdio.h>
// int main()
// {
//     char str[50];
//     printf("Enter the string : ");
//     scanf("%s",str);
//     int i=0;
//     int j=0;
//     while(str[i]!='\0')
//     {
//         if(str[i]=='b' && str[i+1]=='b' && str[i+2]=='c')
//         {
//             str[j]='#';
//             j++;
//             i=i+3;
//         }else if(str[i]=='b' && str[i+1]=='b' && str[i+2]=='e')
//         {
//             str[j]='*';
//             j++;
//             i=i+3;
//         }else{
//             str[j]=str[i];
//             j++;
//             i++;
//         }
//     }
//     str[j]='\0';
//     printf("After adding : %s\n",str);
// }

//reverse each word
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    
    int start=0;
    int end;
    for(end=0;end<=len;end++)
    {
        if(str[end]==' ' || str[end]=='\0')
        {
            i=start;
            j=end-1;
            while(i<j)
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++;
                j--;
            }
            start=end+1;
        }
    }
    printf("%s\n",str);
        
    
}