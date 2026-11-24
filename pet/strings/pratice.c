//Remove duplicate characters from a string.
// #include<stdio.h>
// int main()
// {
//     char str[30];
//     printf("Enter the string : ");
//     scanf("%s",str);
//     int duplicate=0;
//     int i=0;
//     while(str[i]!='\0')
//     {
//         duplicate=0;
//         int j=0;
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
//             printf("%c",str[i]);
//         }
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

//Remove all occurrences of a specific character from a string
// #include<stdio.h>
// int main()
// {
//     char str[30];
//     printf("Enter the string : ");
//     scanf("%19s",str);
//     char ch;
//     printf("Enter the specific character : ");
//     scanf(" %c",&ch);
//     int i=0,j=0;
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

//Find the length of the last word in a string. Examples: "Hello world" fi 5; "Fly me to the moon" fi 3
// #include<stdio.h>
// int main()
// {
//     char str[50];
//     printf("Enter the string : ");
//     scanf("%[^\n]",str);
//     //length of the string 
//     int len=0;
//     while(str[len]!='\0')
//     {
//         len++;
//     }
//     //removing trailing spaces
//     int start=0;
//     int end=len-1;
//     int count =0;
//     while(end>=0 && str[end]==' ')
//     {
//         end--;
//     }
    
//     while(str[end]!='\0' && str[end]!=' ')
//     {
//         count++;
//         end--;
//     }
//     printf("The count of the last word is : %d\n",count);
// }

//Find the extra character between two strings.
// #include<stdio.h>
// int main()
// {
//     char str1[30];
//     printf("Enter the string : ");
//     scanf("%s",str1);
//     char str2[30];
//     printf("Enter the string 2 : ");
//     scanf("%s",str2);
//     int i=0;
//     int j=0;
//     while(str1[i]!='\0')
//     {
//         int flag=1;
//         j=0;
//         while(str2[j]!='\0')
//         {
//             if(str1[i]==str2[j])
//             {
//                 flag=0;
//                 break;
//             }
//             j++;
            
//         }
//         if(flag==1)
//         {
//             printf("%c",str1[i]);
//         }
//         i++;
//     }
//     i=0;
//     while(str2[i]!='\0')
//     {
//         int flag=1;
//         j=0;
//         while(str1[j]!='\0')
//         {
//             if(str2[i]==str1[j])
//             {
//                 flag=0;
//                 break;
//             }
//             j++;
//         }
//         if(flag==1)
//         {
//             printf("%c",str2[i]);
//         }
//         i++;
//     }
//     printf("\n");
//     return 0;

// }

//Replace words in a string. Example from notes: string1 = "wives are knives", replacement/string2 =
//"function pointer" fi output "function are knives"
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[50];
//     printf("Enter the string1 : ");
//     scanf("%[^\n]",str1);
//     char str2[50];
//     printf("Enter the string2 : ");
//     scanf(" %[^\n]",str2);
//     char temp[50];
//     char temp1[50];
//     char temp2[50];
//     int i=0;
//     int j=0;
//     while(str1[i]!='\0' && str1[i]!=' ')
//     {
//         temp[j]=str1[i];
//         j++;
//         i++;
//     }
//     j=0;
//     while(str1[i]!='\0')
//     {
//         temp1[j]=str1[i];
//         j++;
//         i++;
//     }
//     i=0,j=0;
//     while(str2[i]!='\0' && str2[i]!=' ')
//     {
//         temp2[j]=str2[i];
//         j++;
//         i++;
//     }
//     strcat(temp2,temp1);
//     printf("Output is : %s\n",temp2);
//     return 0;
// }


//Reverse a word.
// #include<stdio.h>
// int main()
// {
//     char str[40];
//     printf("Enter the string : ");
//     scanf("%[^\n]",str);
//     int len=0;
//     while(str[len]!='\0')
//     {
//       len++;
//     }
//     int i=0;
//     int j=len-1;
//     while(i<j)
//     {
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         i++;
//         j--;
//     }
//     printf("Reversed string is : %s\n",str);
// }

//reverse each word
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter the string : ");
//     scanf("%[^\n]",str);
//     int len=0;
//     while(str[len]!='\0')
//     {
//         len++;
//     }
//     int i=0,j=len-1;
//     while(i<j)
//     {
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         i++;
//         j--;
//     }
//     int start=0;
//     int end;
//     for(end=0;end<=len;end++)
//     {
//         if(str[end]==' ' || str[end]=='\0')
//         {
//          i=start;
//          j=end-1;;
//          while(i<j)
//          {
//             char temp=str[i];
//             str[i]=str[j];
//             str[j]=temp;
//             i++;
//             j--;
//         }
//         start=end+1;
//     }
//     }
//     printf("%s\n",str);
// }

