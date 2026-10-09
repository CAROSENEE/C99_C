// Count the number of lines entered by the user
#include <stdio.h>

int main()
{
    char ch;
    int lines = 0;
    int sawChar = 0;

    printf("Enter multiple lines (type ~ then press Enter to stop):\n");

    while ((ch = getchar()) != 126)   /* 126 is the ASCII value of '~' */
    {
        if (ch == '\n')
        {
            lines++;
            sawChar = 0;
        }
        else
        {
            sawChar = 1;
        }
    }

    if (sawChar)
        lines++;

    printf("\nNumber of lines entered = %d\n", lines);

    return 0;
}
