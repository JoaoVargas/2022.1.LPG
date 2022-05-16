#include "CalendarioFuncs.h"

Pessoa teste;
Endereco teste2[5];
Calendario calendario;

int main()
{
    calendario = calendarioMaker(calendario);
    int menu = 1;
	
	while (!menu == 0){
		printf("---Menu do Calendario---\nDigite a opçao:\n0 - Sair\n1 - Mostrar o Calendario\n");
		scanf("%d", &menu );
		printf("\n");

		switch(menu){
		
			case 1:
				mostrarDiasDoMes(calendario);
				break;
				
		}
		printf("\n\n");
		
	}
	printf("Adeus...");

    return 0;
}
