#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    double delta, r1, r2;


    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);

    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);

    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);


    delta = b * b - 4 * a * c;

    if (delta > 0) {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les solutions sont : %.2f et 8\n %.2f\n", r1, r2);
    } else if (delta == 0) {
        r1 = -b / (2 * a);
        printf("La solution est unique : %.2f\n", r1);
    } else {
        double rp = -b / (2 * a);
        double ip = sqrt(-delta) / (2 * a);
        printf("Les solutions complexes sont : %.2lf + %.2li et %.2f - %.2lfi\n", rp, ip, rp, ip);
    }
    return 0;
}
