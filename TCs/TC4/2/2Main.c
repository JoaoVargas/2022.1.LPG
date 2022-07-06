#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escreverRand(FILE *arq);

int main()
{
    int i, num, positivo = 0, negativo = 0, temp;

    FILE *arqEE = fopen("Entrada.txt", "wt");
    if (arqEE == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }
    escreverRand(arqEE);
    fclose(arqEE);

    FILE *arqE = fopen("Entrada.txt", "rt");
    if (arqE == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }

    FILE *arqS = fopen("Saida.txt", "wt");
    if (arqS == NULL)
    {
        printf("Erro salvando arquivo de saida!\n");
        return 0;
    }

    while (!feof(arqE))
    {
        fscanf(arqE, "%d", &num);
        if (num == 0)
        {
            break;
        }
        else if(num <= 100000){
            for (i = 0; i < num; i++)
            {
                fscanf(arqE, "%d", &temp);
                if (temp < 0)
                {
                    negativo++;
                } else
                {
                    positivo++;
                }
            }
            
            if ((negativo > 0)  && (positivo == 0))
            {
                fprintf(arqS, "%d negativos", negativo);
            }
            else if ((negativo == 0) && (positivo > 0))
            {
                fprintf(arqS, "%d positivos", positivo);
            }
            else if ((negativo > 0)  && (positivo > 0))
            {
                fprintf(arqS, "%d negativos, %d positivos", negativo, positivo);
            }
            fprintf(arqS, "\n");

        }
        else
        {
            fprintf(arqS, "quantidade inválida de casos\n");
            for (i = 0; i < num; i++)
            {
                fscanf(arqE, "%d", &temp);
            }
        }
        
        num = 0;
        negativo = 0;
        positivo = 0;
    }
    

    fclose(arqE);
    fclose(arqS);
    return 0;
}


void escreverRand(FILE *arq){
    int n, temp, temp2, i, j, metade = RAND_MAX/2;
    time_t t;
    srand((unsigned) time(&t));

    printf("Digite a quantidade de casos:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        temp = rand() % 100000;

        fprintf(arq, "%d", temp);
        for (j = 0; j < temp; j++)
        {
            temp2 = rand() - metade; // gera um numero entre -1073741823 e 1073741823
            fprintf(arq, " %d", temp2);
        }
        fprintf(arq, "\n");
    }
    fprintf(arq, "0");
}
