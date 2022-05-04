#include <stdio.h>
 
int main() {
    int i, j;
    float k;
    for (i = 0 ; i <= 20 ; i+= 2){
        k = i/10.0;
        for (j = 1 ; j <= 3 ; j++){
            printf("I=%.1f J=%d\n", k, j );
        }   
    }
 
    return 0;
}