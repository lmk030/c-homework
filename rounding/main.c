#include <stdio.h>
double rounding (double x)
{
    if((x - (int)x) < 0.5)
    {
        return (int) x;
    }
    else
        return (int) x+1;
}
int main() {
    double a;
    scanf("%lf",&a);
    printf("%f",rounding(a));
    return 0;
}