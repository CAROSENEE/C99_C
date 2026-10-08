
// Find the frequency of a specific word in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], w[100];
    int a[1000], i, j, k = 0, l, found = 0, t = 0, n;

    printf("Enter a string (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", s);

    getchar(); /* discard the ~ */

    printf("Enter the word to check its frequency (type ~ then press Enter):\n");
    scanf(" %[^~]", w);

    for (i = 0; s[i]; i++)
        if (s[i] == ' ')
            a[k++] = i;

    a[k++] = i;

    j = 0;

    for (i = 0; i < k; i++)
    {
        n = a[i] - j;

        if (n == (int)strlen(w))
        {
            t = 0;

            for (l = 0; w[l]; l++)
                if (s[l + j] == w[l])
                    t++;

            if (t == (int)strlen(w))
                found++;
        }

        j = a[i] + 1;
    }

    printf("\nFrequency of the word '%s' is %d\n", w, found);

    return 0;
}
