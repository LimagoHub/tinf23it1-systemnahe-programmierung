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

    Operation ops[] = {add,sub,mult,div };

    for(int i = 0; i < 4; i++){
        printf("%lf\n", ops[i](2, 3));
    }

    MyFptrType ergebnis = sinnDesLebens;
    ergebnis();
    return 0;
}
