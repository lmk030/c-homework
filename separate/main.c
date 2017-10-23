#include <stdio.h>
void separate (double a)
{
    printf("%f %f", a - (int)a , (int)a);
}

int main() {
   double a;
    scanf("%lf",&a);
    separate(a);
    return 0;
}