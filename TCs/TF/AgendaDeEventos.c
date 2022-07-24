#include "AgendaFuncs.c"

int main()
{
    time_t s;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);

    ListaEventos *LP;
    LP = malloc(sizeof(ListaEventos));
    LP->numEventos = 0;
    LP->lista = malloc(sizeof(Evento) * (LP->numEventos + 1));
    Evento buffer;

    FILE *leitura = fopen("Back.bin", "rb");
    if (leitura == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }

    while(fread(&buffer, sizeof(Evento), 1, leitura)){
        LP->lista[LP->numEventos] = buffer;
        LP->numEventos++;
        qsort(LP->lista, LP->numEventos, sizeof(Evento), compararEventos);
        LP->lista = realloc(LP->lista, (LP->numEventos + 1) * sizeof(Evento));
    }

    FILE *escrita = fopen("Back.bin", "wb"); 
    if (escrita == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }

    int menu = 1, i;
    while (!menu == 0)
    {
        printf("\n\n");
        
        printf("---Menu de Eventos---\n");
        printf("*Eventos cadastrados: %d\n", LP->numEventos);
        printf("0 - Sair.\n");
        printf("1 - Cadastrar Evento.\n");
        printf("2 - Deletar Evento.\n");
        printf("3 - Mostrar todos os Eventos.\n");
        printf("4 - Mostrar todos os Eventos em uma data.\n");
        printf("5 - Mostrar os proximos cinco Eventos.\n");
        printf("Digite a opcao: ");
        scanf("%d", &menu);
        printf("\n");

        switch (menu)
        {

        case 1:
            if (addEvento(LP))
            {
                LP->numEventos++;
                qsort(LP->lista, LP->numEventos, sizeof(Evento), compararEventos);
                LP->lista = realloc(LP->lista, (LP->numEventos + 1) * sizeof(Evento));
            }
            break;

        case 2:
            if (delEvento(LP))
            {
                LP->numEventos--;
                LP->lista = realloc(LP->lista, (LP->numEventos + 1) * sizeof(Evento));
            }
            break;

        case 3:
            mostrarTodosEventos(LP);
            break;

        case 4:
            mostrarDataEventos(LP);
            break;

        case 5:
            mostrarCincEventos(LP, current_time->tm_mday, current_time->tm_mon + 1, current_time->tm_year + 1900);
            break;

            printf("\n\n");
        }
    }

    printf("Adeus...\n");

    for (i = 0; i < LP->numEventos; i++)
    {
        fwrite(&LP->lista[i], sizeof(Evento), 1, escrita);
    }
    

    fclose(leitura);
    fclose(escrita);
    free(LP->lista);
    free(LP);

    return 0;
}
