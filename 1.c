#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("veuillez entrer la valeur du N :");
    scanf("%d",&N);
    if (N%2 == 0 )
        printf("%d : pair",N);
    else
        printf("%d : impair",N);
    return 0;
}
