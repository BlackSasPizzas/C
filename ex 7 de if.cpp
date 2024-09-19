#include <stdio.h>

int main(){
	int i = 1,soma=0,n;
	
	while(i<=6){
		printf("digite uma sequencia de numeros:");
		scanf("%d",&n);
		if(n>0){
			soma = soma +n;
		}
		i++;
	}
	printf("a soma de tudo e %d",soma);
	return 0 ; 	
}








