// Tokenize a string into words using a character array
#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    char string2[100][100];
    int length, ctr = 0, i, j = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", string);

    length = strlen(string);

    for (i = 0; i <= length; i++)
    {
        if (string[i] == ' ' || string[i] == '\0')
        {
            string2[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else
        {
            string2[ctr][j] = string[i];
            j++;
        }
    }

    printf("\nAfter tokenizing the given string:\n");

    for (i = 0; i < ctr; i++)
        printf("%s\n", string2[i]);

    return 0;
}
