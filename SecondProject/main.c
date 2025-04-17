#include <stdio.h>
#include <malloc.h>

double summe(int anzahl, double summand1, ...){
    double result = 0;
    double* summanden = &summand1;
    for(int i = 0; i < anzahl; i++){
        result += summanden[i];
    }
    return result;
}

void ausgabe(char * wort1, ...){
    
}

int main(int argc, char* argv[], char **envp) {

    double ergebnis = summe(3, 10.0,100.0, 1000.0);
    printf("%lf\n", ergebnis);

    ausgabe("Hallo", "Welt", "!", NULL);

    return 0;
}
