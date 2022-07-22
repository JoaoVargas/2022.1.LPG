#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define o tipo Data
typedef struct
{
    char dia[2];
    char mes[2];
    char ano[4];
} Data;

// define o tipo Hora
typedef struct
{
    char hora[2];
    char min[2];
} Hora;

// define Evento, que recebe os tipos Data e Hora
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
