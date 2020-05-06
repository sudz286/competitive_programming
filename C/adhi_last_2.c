#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// #define BUFSIZE 1024	

// char * strsub (char *input, char *substring, char *replace)
// {
//     int number_of_matches = 0;
//     size_t substring_size = strlen(substring), replace_size = strlen(replace), buffer_size;
//     char *buffer, *bp, *ip;

//     if (substring_size)
//     {
//         ip = strstr(input, substring);
//         while (ip != NULL)
//         {
//             number_of_matches++;
//             ip = strstr(ip+substring_size, substring);
//         }
//     }
//     else
//         number_of_matches = strlen (input) + 1;
 
//     buffer_size = strlen(input) + number_of_matches*(replace_size - substring_size) + 1;

//     if ((buffer = ((char *) malloc(buffer_size))) == NULL)
//     {
//         return NULL;
//     }

//     bp = buffer;
//     ip = strstr(input, substring);
//     while ((ip != NULL) && (*input != '\0'))
//     {
//         if (ip == input)
//         {
//             memcpy (bp, replace, replace_size+1);
//             bp += replace_size;
//             if (substring_size)
//                 input += substring_size;
//             else
//                 *(bp++) = *(input++);
//             ip = strstr(input, substring);
//         }
//         else 
//             while (input != ip)
//                 *(bp++) = *(input++);

//     }

//     if (substring_size)
//         strcpy (bp, input);
//     else
//         memcpy (bp, replace, replace_size+1);

//     return buffer;
// }


// char * read_string (const char * display)
// {
//         char *buf, *bp;

//         if ((buf=(char *)malloc(BUFSIZE))==NULL)
//         {
//             return NULL;
//         }
//         else
//             bp=buf;

//         printf ("%s\n", display);

//         while ((*bp=getchar()) != '\n')bp++;
//         *bp = '\0';

//         return buf;
// }

void print_last_name(char *last_name)
{
    while(*last_name!='\0')
    {
        printf("%c",*last_name);
    }
    printf("\n");
}

void main()
{
        char name_list[100][100]={
            "Adhithya Bala",
            "Mark Waugh",
            "Simon James Taufel",
            "Andrew Poop Symonds",
            "Steve Gary Waugh"
        };

        int i,j,no[5];
        char * ptr;
        for(i=0;i<5;i++){
            for(j=name_list[i];j!='\0';j++){
                if(strcmp(j,' ')==0){
                    no[i]++;
                }
            }
        }

        for(i=0;i<5;i++){
            printf("%c",name_list[i][0]);
            for(j=name_list[i];j!='\0';j++){
                if(strcmp(j,' ')==0&&no[i]-1!=0){
                    printf(" %c",name_list[i][++j]);
                    no[i]-=1;
                }
                else if(strcmp(j,' ')==0&&no[i]-1==0){
                    ptr = &j;
                    print_last_name(ptr);
                }
            }
        }

}