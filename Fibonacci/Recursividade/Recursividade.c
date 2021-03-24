#include <stdio.h>

void contrario(char i[]){
    if (i[0] != '\0') {
        contrario(&i[1]);
        printf("%c",i[0]);
        }
    }
int main(void) {
    char i[30],c;
    int t;
    printf("Imprime reverso\n\n");
    printf("\nDigite a string:  ");
    gets(i);
    contrario(i);
    getch();
}