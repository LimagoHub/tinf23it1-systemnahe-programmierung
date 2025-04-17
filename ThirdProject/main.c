#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* createAndPopulateArray(char c,int size){
    char *buffer=malloc((size+1) * sizeof(char));
    memset(buffer, 0, (size+1) * sizeof(char));
    for(int i = 0; i < size; i++){
        buffer[i] = c;
    }
    //buffer[size] = '\0';
    return buffer;
}

typedef struct schwein {
    char name[11];
    int gewicht;
} Schwein;

int main(void) {
    Schwein *piggy;
    piggy = malloc(sizeof(Schwein));
    memset(piggy, 0, sizeof(Schwein));

    //char buffer[100];
    char * ptr = createAndPopulateArray('A',10);
    printf("%s\n",ptr );

    free(ptr);
    return 0;
}
