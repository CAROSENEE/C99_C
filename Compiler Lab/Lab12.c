
// Check whether a word is a keyword or a valid identifier
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char keyword[20][20] = {"int", "float", "const", "short", "struct",
        "signed", "unsigned", "double", "break", "long", "char", "for", "if",
        "switch", "else", "while", "void", "typedef", "goto", "enum"};

    char a[1000];
    int i, flag = 0;

    printf("Enter a word (type ~ then press Enter to stop):\n");
    scanf(" %[^~]", a);

    for (i = 0; i < 20; i++)
        if (strcmp(keyword[i], a) == 0)
            flag = 1;

    if (flag == 1)
    {
        printf("\n%s is a Keyword\n", a);
        return 0;
    }

    flag = 0;

    if (a[0] == '_' || isalpha(a[0]))
    {
        for (i = 1; a[i] != '\0'; i++)
            if (!isalnum(a[i]) && a[i] != '_')
                flag = 1;
    }
    else
        flag = 1;

    if (flag == 0)
        printf("\n%s is a valid Identifier\n", a);
    else
        printf("\n%s is Not a valid Identifier\n", a);

    return 0;
}
