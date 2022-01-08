#include <stdio.h>

int main()
{
    int r, n;
    char str[400];
    gets(str);

    for (n = 0; str[n] != '\0'; ++n)
        ;
    printf("\nOutput: ");
    for (r = n - 1; r >= 0; r--)
    {
        printf("%c", str[r]);
    }
    return 0;
}
