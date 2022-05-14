typedef struct {
    char pais[50];
    char estado[50];
    char bairro[50];
    char rua[50];
    char numero[50];
    char complemento[50];
    int cep[8];
} Endereco;

typedef struct {
    int ddd[2];
    int cep[8];
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} Aniversario;

typedef struct {
    int janeiro;
    int fevereiro;
    int marco;
    int abril;
    int maio;
    int junho;
    int julho;
    int agosto;
    int setembro;
    int outubro;
    int novembro;
    int dezembro;

    int janeiroTam;
    int fevereiroTam;
    int marcoTam;
    int abrilTam;
    int maioTam;
    int junhoTam;
    int julhoTam;
    int agostoTam;
    int setembroTam;
    int outubroTam;
    int novembroTam;
    int dezembroTam;
} Calendario;

struct Pessoa{
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Aniversario aniversario;
    
};
