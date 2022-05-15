#include <string.h>
#include <stdlib.h>

//Define o tipo endereço
typedef struct {
    char pais[50];
    char estado[50];
    char bairro[50];
    char rua[50];
    char numero[50];
    char complemento[50];
    int cep[8];
} Endereco;

//define o tipo telefone
typedef struct {
    int ddd[2];
    int cep[8];
} Telefone;

//define o tipo aniversario
typedef struct {
    int dia;
    int mes;
    int ano;
} Aniversario;

//define pessoa, que recebe endereço, telefone e aniversario
struct Pessoa{
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Aniversario aniversario;
    
};

//define calendario como um tipo
typedef struct {
    int diasDoMes[12];
    char nomesDoMes[12][10];
} Calendario;

//função para dar valor aos itens de calendario
Calendario calendarioMaker(void){
    Calendario calendarioBase;
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