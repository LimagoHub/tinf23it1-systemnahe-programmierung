#include <stdio.h>

typedef int Herbert;

typedef int (*MyFptrType)(void);
typedef double(*Operation)(double, double);
int sinnDesLebens() {
    return 42;
}

double add(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return add(a, -b);
}
double mult(double a, double b) {
    return a * b;
}
double div(double a, double b) {
    return a / b;
}

int main(void) {

    Operation x = add;
    printf("%lf\n", x(1.0, 2.0));

    MyFptrType ergebnis = sinnDesLebens;
    ergebnis();
    return 0;
}
