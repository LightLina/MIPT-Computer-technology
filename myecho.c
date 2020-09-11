#include<stdio.h>
#include<string.h>

int main (int argc, char ** argv) 
{   
    if (argc <= 1)
       return 0; 
    int start = 1 + !strcmp(argv[1], "-n"); 
    for(int i = start; i < argc; i++)
    {
        if(i > start)
        {
            printf(" "); 
        }
        printf("%s", argv[i]); 
    } 
        
    if (start == 1)             
        puts(""); 
    return 0; 
}
