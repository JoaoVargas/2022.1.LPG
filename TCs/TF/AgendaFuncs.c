#include "AgendaAux.h"

void addEvento(ListaEventos *);
Evento cadastrarEvento(Evento);
Evento cadastrarData(Evento);
Evento cadastrarHora(Evento);

Evento cadastrarData(Evento eventoData)
{
    char buffer2[3], buffer4[5];
    int dia, mes, ano, check = 0;

    while (check == 0)
    {
        printf("Digite o dia do Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &dia))
            {
                if (dia <= 31 && dia >= 1)
                {
                    eventoData.data.dia = dia;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo o dia, digite uma data valida.\n");
                }
            }
            else
            {
                printf("Erro lendo o dia, digite uma data valida.\n");
            }
        }
    }
    check = 0;

    while (check == 0)
    {
        printf("Digite o mes do Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &mes))
            {
                if (mes <= 12 && mes >= 1)
                {
                    eventoData.data.mes = mes;

                    check = 1;
                }
                else
                {
                    printf("Erro lendo o mes, digite uma data valida.\n");
                }
            }
            else
            {
                printf("Erro lendo o mes, digite uma data valida.\n");
            }
        }
    }
    check = 0;

    while (check == 0)
    {
        printf("Digite o ano do Evento: ");
        fflush(stdin);
        if (fgets(buffer4, sizeof(buffer4), stdin))
        {
            if (1 == sscanf(buffer4, "%d", &ano))
            {
                if (ano <= 2100 && ano >= 2020)
                {
                    eventoData.data.ano = ano;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo o ano, digite uma data valida.\n");
                }
            }
            else
            {
                printf("Erro lendo o ano, digite uma data valida.\n");
            }
        }
    }
    check = 0;

    return eventoData;
}

Evento cadastrarHora(Evento eventoHora)
{
    char buffer2[3];
    int horaIni, minutoIni, horaFim, minutoFim, check = 0;

    while (check == 0)
    {
        printf("Digite que horas (0 - 23) ira iniciar o Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &horaIni))
            {
                if (horaIni <= 23 && horaIni >= 0)
                {
                    eventoHora.inicio.hora = horaIni;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo a hora, digite uma hora valida. (Padrao militar 0 - 23)\n");
                }
            }
            else
            {
                printf("Erro lendo a hora, digite uma hora valida. (Padrao militar 0 - 23)\n");
            }
        }
    }
    check = 0;

    while (check == 0)
    {
        printf("Digite que minutos (0 - 59) ira iniciar o Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &minutoIni))
            {
                if (minutoIni <= 59 && minutoIni >= 0)
                {
                    eventoHora.inicio.min = minutoIni;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo o minuto, digite um minuto valido. (0 - 59)\n");
                }
            }
            else
            {
                printf("Erro lendo o minuto, digite um minuto valido. (0 - 59)\n");
            }
        }
    }
    check = 0;

     while (check == 0)
    {
        printf("Digite que horas (0 - 23) ira acabar o Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &horaFim))
            {
                if (horaFim <= 23 && horaFim >= 0)
                {
                    eventoHora.fim.hora = horaFim;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo a hora, digite uma hora valida. (Padrao militar 0 - 23)\n");
                }
            }
            else
            {
                printf("Erro lendo a hora, digite uma hora valida. (Padrao militar 0 - 23)\n");
            }
        }
    }
    check = 0;

    while (check == 0)
    {
        printf("Digite que minutos (0 - 59) ira iniciar o Evento: ");
        fflush(stdin);
        if (fgets(buffer2, sizeof(buffer2), stdin))
        {
            if (1 == sscanf(buffer2, "%d", &minutoFim))
            {
                if (minutoFim <= 59 && minutoFim >= 0)
                {
                    eventoHora.fim.min = minutoFim;
                    check = 1;
                }
                else
                {
                    printf("Erro lendo o minuto, digite um minuto valido. (0 - 59)\n");
                }
            }
            else
            {
                printf("Erro lendo o minuto, digite um minuto valido. (0 - 59)\n");
            }
        }
    }
    check = 0;

    return eventoHora;
}

Evento cadastrarEvento(Evento evento)
{
    evento = cadastrarData(evento);
    evento = cadastrarHora(evento);
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
