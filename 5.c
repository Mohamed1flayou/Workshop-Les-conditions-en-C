#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    printf("entrer la valeur du X:");
    scanf("%d",&X);

    if(X>0){
        printf("Le nomeber %d positif ",X);
    }
    else if(X<0)
        printf("Le nomeber %d nigative ",X);
        else
            printf("Le nomeber null ");
    return 0;
}
