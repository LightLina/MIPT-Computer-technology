#include<unistd.h>
#include<string.h>

int main()
{
    char* output = "Hello world!\n"; 
    int fd = 1;  

    write(fd, output, strlen(output) +1); 
}
