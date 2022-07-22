#include "AgendaAux.h"

void addEvento(ListaEventos*);
Evento cadastrarEvento(Evento);
Evento cadastrarData(Evento);
void cadastrarHora(Evento);

Evento cadastrarData(Evento evento)
{
    //int temp;
    printf("Digite o dia do Evento: ");
    scanf("%s", evento.data.dia);
    printf("Digite o mes do Evento: ");
    scanf("%s", evento.data.mes);
    printf("Digite o ano do Evento: ");
    scanf("%s", evento.data.ano);

    return evento;
}

Evento cadastrarEvento(Evento evento)
{
    evento = cadastrarData(evento);
    //cadastrarHora(evento);
    printf("Digite o local do evento: ");
    scanf("%s", evento.local);
    printf("Digite a descricao do evento: ");
    scanf("%s", evento.descricao);

    return evento;
}

void addEvento(ListaEventos *LP)
{
    if (!LP->numEventos)
    {
        LP->lista[LP->numEventos] = cadastrarEvento(LP->lista[LP->numEventos]);
    }
    else
    {
        
    }
    
}

// void cadastrarHora(Evento evento)
// {

// }
