#import <stdio.h>
#import <cs50.h>

// function prototypes
int str_len(char* addr);
void str_copy(char* addr_a, char* addr_b);

int main(int argc, char* argv[])
{
    printf("Enter string: ");
    char* original = GetString();
    char* duplicate = original;

    str_copy(original, duplicate);

    printf("Original: %s \n", original);
    printf("Duplicate: %s \n\n", duplicate);
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

void str_copy(char* addr_a, char* addr_b)
{
    printf("\nCopying...\n");
    int len = str_len(addr_a);
    addr_b = malloc(len * sizeof(char));
}
