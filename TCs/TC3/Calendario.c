#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include "CalendarioAUX.h"

int main()
{
    struct Pessoa teste;
    Endereco teste2[5];

    strcpy(teste2[0].pais, "Brasil");

    strcpy(teste.nome, "Caderno");

    teste.endereco = teste2[0];

    printf("%s %s\n", teste.nome, teste.endereco.pais);

    return 0;
}
