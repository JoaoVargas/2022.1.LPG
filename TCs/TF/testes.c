#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int hora;
    int min;
} Hora;

typedef struct
{
    Data data;
    Hora inicio;
    Hora fim;
    char local[200];
    char descricao[200];
} Evento;

typedef struct
{
    Evento *lista;
    int numEventos;
} ListaEventos;

int main()
{
    // char line[3], line2[3];
    // int i, j;
    // if(fgets(line, sizeof(line), stdin)){
    //     if (1 == sscanf(line, "%d", &i)) {
    //         printf("%d\n", i);
            
    //     } 
    //     else
    //     {
    //         printf("erro\n");
    //     }
    // }
    // fflush (stdin);
    // if(fgets(line2, sizeof(line2), stdin)){
    //     if (1 == sscanf(line2, "%d", &j)) {
    //         printf("%d\n", j);
            
    //     } 
    //     else
    //     {
    //         printf("erro\n");
    //     }
    // }


    ListaEventos *LP;
    LP->numEventos = 0;
    LP->lista = malloc(sizeof(Evento) * (LP->numEventos + 1));

    LP->lista[LP->numEventos].data.dia = 2;
    LP->numEventos++;
    LP->lista = realloc(LP->lista, (LP->numEventos + 1) * sizeof(Evento));

    printf("%d\n", LP->lista[0].data.dia);


    return 0;
}