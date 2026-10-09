
// Remove white spaces from a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], blank[1000];
    int i = 0, d = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", str);

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            blank[d++] = str[i];

        i++;
    }

    blank[d] = '\0';

    printf("\nText after removing white space: %s\n", blank);

    return 0;
}
