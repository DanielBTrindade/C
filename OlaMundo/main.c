#include <stdio.h>
#include <locale.h>

int main() {
    // Define a localização para o Português para aceitar acentos
    setlocale(LC_ALL, "Portuguese");

    printf("Ola, Mundo!\n");

    return 0;
}