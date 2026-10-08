// Extract single-line and multi-line comments from text
#include <stdio.h>

int main()
{
    char a[1000], singleLine[1000], multiLine[1000];
    int i = 0, j = 0, m = 0;

    printf("Enter text/code (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", a);

    while (a[i] != '\0')
    {
        if (a[i] == '/' && a[i + 1] == '/')
        {
            i += 2;

            while (a[i] != '\n' && a[i] != '\0')
                singleLine[j++] = a[i++];

            singleLine[j++] = ' ';
        }
        else
        {
            i++;
        }
    }

    singleLine[j] = '\0';

    i = 0;

    while (a[i] != '\0')
    {
        if (a[i] == '/' && a[i + 1] == '*')
        {
            i += 2;

            while (!(a[i] == '*' && a[i + 1] == '/') && a[i] != '\0')
                multiLine[m++] = a[i++];

            i += 2;
        }
        else
        {
            i++;
        }
    }

    multiLine[m] = '\0';

    printf("\nSingle line comment: %s\n", singleLine);
    printf("Multiple line comment: %s\n", multiLine);

    return 0;
}
