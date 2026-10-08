// Find the most frequent word in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[100][100];
    int i, j = 0, x, ct1 = 0, k = 0, ct2 = 0, ct = 0;

    printf("Enter a string (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", a);

    x = strlen(a);

    for (i = 0; i < x; i++)
    {
        if (a[i] != ' ')
        {
            ct1++;

            while (a[i] != ' ' && a[i] != '\0')
                b[j][k++] = a[i++];

            b[j][k] = '\0';
        }

        j++;
        k = 0;
    }

    x = 0;

    for (i = 0; i < ct1; i++)
    {
        for (j = 0; j < ct1; j++)
        {
            if (strcmp(b[i], b[j]) == 0)
                ct2++;
        }

        if (ct2 > ct)
        {
            x = i;
            ct = ct2;
        }

        ct2 = 0;
    }

    printf("\nOutput: %s\n", b[x]);

    return 0;
}
