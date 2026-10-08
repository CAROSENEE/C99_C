
// Count the occurrences of a, an, and the in a sentence
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int a = 0, an = 0, the = 0;

    printf("Enter a sentence (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", str);

    char *token = strtok(str, " ");

    while (token != NULL)
    {
        if (strcmp(token, "an") == 0 || strcmp(token, "An") == 0)
            an++;

        else if (strcmp(token, "a") == 0 || strcmp(token, "A") == 0)
            a++;

        else if (strcmp(token, "the") == 0 || strcmp(token, "The") == 0)
            the++;

        token = strtok(NULL, " ");
    }

    printf("\nA = %d\nAn = %d\nThe = %d\n", a, an, the);

    return 0;
}
