#import <stdio.h>
#import <cs50.h>

// function prototypes
int str_len(char* addr);
void str_copy(char* addr_a, char* addr_b);

int main(int argc, char* argv[])
{
    printf("Enter string A: ");
    char* input = GetString();
    int len = str_len(input);
    printf("%s len: %i\n", input, len);
}

int str_len(char* addr)
{
    int len = 0;
    while (*(addr + len) != '\0')
    {
        len++;
    }
    return len;
}
