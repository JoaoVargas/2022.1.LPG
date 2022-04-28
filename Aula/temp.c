#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j, tam;
    int y[50][50];
    char x[50][50];
    char temp;
    
    scanf("%d", &n);
    
    for(i = 0 ; i < n ; i++){
        scanf("%s", x[i]);
    }
    
    for(i = 0 ; i < n ; i++){
        tam = strlen(x[i]);
        printf("%d", tam);
        for(j = 0 ; j < tam ; j++){
            y[i][j] = x[i][j];
            printf("%d\n", y[i][j]);
        }
        printf("\n");
    }
 
    for(i=0 ; i < n ; i++){
        tam = strlen(y[i]);
        for(j = 0 ; j < tam ; j++){
            printf("%d\n", y[i][j]);
        }
        printf("\n");
    }
    
    /*
    for(i = 0 ; i < n ; i++){
        printf("%s\n", y[i]);
    }
    */
    
    return 0;
}
