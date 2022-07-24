#include "AgendaFuncs.c"

int main()
{
    ListaEventos *LP;
    LP->numEventos = 0;
    LP->lista = malloc(sizeof(Evento) * (LP->numEventos + 1));

    int menu = 1;
    
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
        printf("6 - Mostrar aniversariantes do dia.\n");
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
                //mostrarDataEventos(lista, i);
                break;

            case 5:
                //mostrarCincEventos(lista, i);
                break;

            printf("\n\n");
        }
    }

    printf("Adeus...\n");
    return 0;
}
