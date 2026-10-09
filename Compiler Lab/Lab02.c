
// Count the number of white spaces in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, count = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", str);

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            count++;

    printf("\nTotal number of white spaces = %d\n", count);

    return 0;
}
