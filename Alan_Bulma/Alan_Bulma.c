#include <stdio.h>
#include <stdlib.h>
const double PI=3.14;

double alan_bulma(double r)
{
    double alan=PI*r*r;
    return alan;
}
double cevre_bulma(double r)
{
    double cevre=2*PI*r;
    return cevre;
}
int main()
{
    double radius,al,ce;
    printf("Yaricap giriniz: ");
    scanf("%lf",&radius);

    al=alan_bulma(radius);
    ce=cevre_bulma(radius);

    printf("Alan: %.2lf Cevre: %.2lf",al,ce);

    return 0;
}
