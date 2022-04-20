#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int menu = 1;
	
	while (!menu == 0){
		printf("Qual exercicio?\n0 - Cancela\n1 - Soma\n");
		scanf("%d", &menu );
	
		switch(menu){
		
			case 1:
				live();
				break;
				
		}
		printf("\n\n");
		
	}
	
	return 0;
}

void torre(void){
	char str[50];
	char *i = &str[0];
	int a = 0;
	
	printf("A: ");
	getchar();
	fgets(str, 50, stdin);
	
	while (a < strlen(str) -1){
		printf("%c\n", *i);
		
		a++;
		*i++;
	}
	
	return;
}

void live(void){
	int* ptr;
    int n = 1, i;
	int a = 0;
	char b;
	
	ptr = (int*)calloc(n, sizeof(int));
	
	printf("Digite os numeros e ao fim digite !:\n");
	scanf(" %c",&b);
	
	
	while (!b == 33){
		a = b - '0';
		
		ptr[n] = a;
		
		n++;
		
		ptr = realloc(ptr, n * sizeof(int));
		
		scanf(" %c",&b);
		
	}
	
	for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
    }
	
	free(ptr);
	
	return;
}



