#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    FILE *arqE = fopen("Entrada.txt", "rt"); //abre entrada
    if (arqE == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }

    // lendo uma string do teclado com a função fgets()
    char palavras[100], palavras2[100];
    fgets(palavras, 100, arqE);
    fgets(palavras2, 100, arqE);

    printf("%s", palavras);
    printf("%s", palavras2);
}