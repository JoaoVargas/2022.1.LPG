#include "CalendarioAUX.h"

//Função para mostrar quantos dias tem um mês
void mostrarDiasDoMes(Calendario calendario){
    int i;
    int numDias = sizeof(calendario.diasDoMes)/sizeof(calendario.diasDoMes[0]);
    for (i = 0; i < numDias; i++){
        printf("%d dias no mes de %s\n", calendario.diasDoMes[i], calendario.nomesDoMes[i]);
    }
}


//Função para dar valor aos itens de calendario
Calendario calendarioMaker(Calendario calendarioBase){
    calendarioBase.diasDoMes[0] = 31;
    calendarioBase.diasDoMes[1] = 28;
    calendarioBase.diasDoMes[2] = 31;
    calendarioBase.diasDoMes[3] = 30;
    calendarioBase.diasDoMes[4] = 31;
    calendarioBase.diasDoMes[5] = 30;
    calendarioBase.diasDoMes[6] = 31;
    calendarioBase.diasDoMes[7] = 31;
    calendarioBase.diasDoMes[8] = 30;
    calendarioBase.diasDoMes[9] = 31;
    calendarioBase.diasDoMes[10] = 30;
    calendarioBase.diasDoMes[11] = 31;

    strcpy(calendarioBase.nomesDoMes[0],"Janeiro");
    strcpy(calendarioBase.nomesDoMes[1],"Fevereiro");
    strcpy(calendarioBase.nomesDoMes[2],"Marco");
    strcpy(calendarioBase.nomesDoMes[3],"Abril");
    strcpy(calendarioBase.nomesDoMes[4],"Maio");
    strcpy(calendarioBase.nomesDoMes[5],"Junho");
    strcpy(calendarioBase.nomesDoMes[6],"Julho");
    strcpy(calendarioBase.nomesDoMes[7],"Agosto");
    strcpy(calendarioBase.nomesDoMes[8],"Setembro");
    strcpy(calendarioBase.nomesDoMes[9],"Outrubro");
    strcpy(calendarioBase.nomesDoMes[10],"Novembro");
    strcpy(calendarioBase.nomesDoMes[11],"Dezembro");

    return calendarioBase;
}