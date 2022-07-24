#include "AgendaAux.h"

void addEvento(ListaEventos *);
Evento cadastrarEvento(Evento);
Evento cadastrarData(Evento);
Evento cadastrarHora(Evento);
int compararEventos (const void *x, const void *y);

int compararEventos (const void *x, const void *y) {
    int priA = ((Evento *)x)->data.ano, segA = ((Evento *)y)->data.ano;
    int priM = ((Evento *)x)->data.mes, segM = ((Evento *)y)->data.mes;
    int priD = ((Evento *)x)->data.dia, segD = ((Evento *)y)->data.dia;
    int priH = ((Evento *)x)->inicio.hora, segH = ((Evento *)y)->inicio.hora;
    int priMi = ((Evento *)x)->inicio.min, segMi = ((Evento *)y)->inicio.min;

    int diff = priA - segA;

    if (diff == 0) {
        if (priM < segM)
        {
            diff = -1;
        }
        else if (priM > segM)
        {    
            diff = +1;
        }
        else
        {
            if (priD < segD)
            {
                diff = -1;
            }
            else if (priD > segD)
            {    
                diff = +1;
            }
            else
            {
                if (priH < segH)
                {
                    diff = -1;
                }
                else if (priH > segH)
                {    
                    diff = +1;
                }
                else
                {
                    if (priMi < segMi)
                    {
                        diff = -1;
                    }
                    else if (priMi > segMi)
                    {    
                        diff = +1;
                    }
                    else
                    {
                        diff = 0;
                    }
                }
            }
        }
    }
    
    return diff;
}

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
        LP->lista[LP->numEventos] = cadastrarEvento(LP->lista[LP->numEventos]);
        qsort(LP->lista, LP->numEventos, sizeof(Evento), compararEventos);
    }
}
