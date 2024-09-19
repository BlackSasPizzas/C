#include <stdio.h>

int main(){
	char g;
	char nome[100];
	
	printf("digite seu nome:");
	scanf("%s",&nome);
	printf("digite seu genero F ou M:");
	scanf(" %c",&g);
	
	if(g =='f' || g == 'F'){
		printf("IIma Sra %s \n",nome);
	}else if(g == 'm' || g == 'M' ){
		printf("IIma Sr %s \n",nome);
	}else{
		printf("genero invalido");
	}
	return 0 ; 
}

