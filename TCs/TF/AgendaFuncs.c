#include "AgendaAux.h"

void listarEvento(ListaEventos *LP)
{
    if (!LP->numEventos)
    {
        cadastrarEvento(LP);
    }
}

void cadastrarEvento(Evento *eventoCad)
{
    cadastrarData(eventoCad);
    cadastrarHora(eventoCad);
    printf("Digite o local do evento: ");
    scanf("%s", eventoCad->local);
    printf("Digite a descricao do evento: ");
    scanf("%s", eventoCad->descricao);
}

void cadastrarData(Evento *eventoCadData)
{
    int temp;
    printf("Digite o dia do Evento: ");
    scanf("%d");
    printf("Digite o mes do Evento: ");
    scanf("");
    printf("Digite o ano do Evento: ");
    scanf("");
}

void cadastrarHora(Evento *eventoCadHora)
{

}
