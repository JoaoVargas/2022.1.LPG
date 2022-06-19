#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, positivo = 0, negativo = 0, temp;

    FILE *arqE = fopen("Entrada.txt", "rt"); //abre entrada
    if (arqE == NULL)
    {
        printf("Erro abrindo arquivo de entrada!\n");
        return 0;
    }

    FILE *arqS = fopen("Saida.txt", "wt"); //abre Saida
    if (arqS == NULL)
    {
        printf("Erro salvando arquivo de saida!\n");
        return 0;
    }

    while (!feof(arqE)) //faz a magica
    {
        fscanf(arqE, "%d", &num); 
        if (num == 0) //fim dos testes
        {
            break;
        }
        else if(num <= 100000){ //dentro do range maximo, vai andando e adicionando pro temp + ou -
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
            
            if ((negativo > 0)  && (positivo == 0)) //escreve o total com a gramatica igual do exemplo
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
        else //caso fora do range ele anda o num de chars pq n lembro maneira melhor de fzr isso
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