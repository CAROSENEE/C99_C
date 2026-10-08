
// Remove single-line and multi-line comments from text
#include <stdio.h>

#include <string.h>

int main()
{
    char str[1000];
    int i = 0;

    printf("Enter text/code (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", str);

    printf("\nText without comments:\n");

    while (str[i] != '\0')
    {
        if (str[i] == '/' && str[i + 1] == '/')
        {
            while (str[i] != '\n' && str[i] != '\0')
                i++;
        }
        else if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;

            while (!(str[i] == '*' && str[i + 1] == '/') && str[i] != '\0')
                i++;

            i += 2;
        }
        else
        {
            putchar(str[i]);
            i++;
        }
    }

    printf("\n");

    return 0;
}
