#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include "CalendarioAUX.c"

struct Pessoa teste;
Endereco teste2[5];
Calendario calendario;

void mostrarDiasDoMes(void){
    int i;
    int numDias = sizeof(calendario.diasDoMes)/sizeof(calendario.diasDoMes[0]);
    for (i = 0; i < numDias; i++){
        printf("%d dias no mes de %s\n", calendario.diasDoMes[i], calendario.nomesDoMes[i]);
    }
}

int main()
{
    calendario = calendarioMaker();
    int menu = 1;
	
	while (!menu == 0){
		printf("---Menu do Calendario---\nDigite a opçao:\n0 - Sair\n1 - Mostrar o Calendario\n");
		scanf("%d", &menu );
		printf("\n");

		switch(menu){
		
			case 1:
				mostrarDiasDoMes();
				break;
				
		}
		printf("\n\n");
		
	}
	printf("Adeus...");

    return 0;
}
