#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

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
typedef struct {
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Aniversario aniversario;
    
} Pessoa;

//define calendario como um tipo
typedef struct {
    int diasDoMes[12];
    char nomesDoMes[12][10];
} Calendario;
