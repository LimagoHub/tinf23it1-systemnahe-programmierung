#include <stdio.h>

void unter(int a){
    printf("%d\n", a);
    a = 100;
}

void ober() {
    int x =10;
    unter(x);
    printf("%d\n", x);
}

void ausgabe(char *message) {

}

size_t string_lenght(const char *message){
    register size_t lenght = 0;
    while(message[lenght]){
        lenght++;
    }
    return lenght;
}

void string_copy(char *dest, const char *source){
    while(*dest++=*source++);

}

int main(void) {



    char gruss[]= "Hallo";
    char buffer[100];
    string_copy(buffer, gruss);

    printf("%s\n", buffer);
    return 0;
}
