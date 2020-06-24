#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main()
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20;
    double b = 20;
    double xp;
    xp = (a + b) / 2;
    double c = func(p, q, xp);
    while (fabs(c) >= EPSILON) {
        if ((c > 0  && func(p, q, a) > 0) || (c < 0 && func(p, q, a) < 0)) {
            a = xp;
        } else {
            b = xp;
        }
        xp = (a + b) / 2;
        c = func(p, q, xp);
    }
    return xp;
}

double f(int p, int q, double x)
{
    return p * x + q;
}