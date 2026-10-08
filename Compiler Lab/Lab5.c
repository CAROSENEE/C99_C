// Count characters excluding spaces in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, totalChars = 0, spaces = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        totalChars++;

        if (str[i] == ' ')
            spaces++;
    }

    printf("\nNumber of characters (without space) = %d\n", totalChars - spaces);

    return 0;
}
