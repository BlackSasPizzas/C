#include <stdio.h>

int main() {
    int n1, n2, n3;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) {
        printf("E um triangulo\n");
        if(n1==n2 && n2==n3 ){
        	printf("o triangulo e equilatero:\n");
		}else if(n1==n2 ||n2==n3||n1==n3){
			printf("o triangulo e isoceles\n");
		}else{
			printf("o triangulo e escaleno");
		}
    } else {
        printf("Nao e um triangulo\n");
    }
    return 0;
}


