// Find the length of a string without using strlen()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, length = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", str);

    for (i = 0; str[i] != '\0'; i++)
        length++;

    printf("\nLength of the string = %d\n", length);

    return 0;
}
