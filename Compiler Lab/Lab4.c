// Count vowels, consonants, and digits in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, vowel = 0, consonant = 0, digit = 0;

    printf("Enter a string (type ~ then press Enter to finish input):\n");
    scanf(" %[^~]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowel++;

        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            consonant++;

        else if (c >= '0' && c <= '9')
            digit++;
    }

    printf("\nVowel = %d\nConsonant = %d\nDigit = %d\n", vowel, consonant, digit);

    return 0;
}
