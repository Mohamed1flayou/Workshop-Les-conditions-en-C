#include <stdio.h>
#include <stdlib.h>

int main()
{
    char crt;


    printf("Entrez un caractere : ");
    scanf(" %c", &crt);


    crt = tolower(crt);

    switch (crt) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est une voyelle.\n", crt);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", crt);
            break;return 0;


            }
}
