#include <stdio.h>
 
int main() {
    int i, j;
    for (i = 1 ; i <= 9 ; i+= 2){
        for (j = 0 ; j <= 2 ; j++){
            printf("I=%d J=%d\n", i, (7 - j) );
        }   
    }
 
    return 0;
}