#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2;

    printf("Entrez la premiere valeur : ");
    scanf("%d", &v1);

    printf("Entrez la deuxieme valeur : ");
    scanf("%d", &v2);

    int somme = v1 + v2;

    if (v1 == v2) {
        int triple = 3 * somme;
        printf("Les deux valeurs sont identiques. Le triple de leur somme est : %d\n", triple);
    } else {
        printf("Les deux valeurs ne sont pas identiques. La somme est : %d\n", somme);
    }

    return 0;
}
