#include <console.h>

int strlen(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

void print(const char msg[]){
    flanterm_write(ft_ctx, msg, strlen(msg));
}

void println(const char msg[]){
    print(msg);
    print("\n");
}