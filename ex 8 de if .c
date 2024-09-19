#include <stdio.h>

int main(){
	int usuario,senha;
	
	printf("digite o usario:");
	scanf("%d",&usuario);
	printf("digite a senha:");
	scanf("%d",&senha);
	
	if(usuario==999 && senha==123){
		printf("login efetuado com sucesso");
	}else if(usuario==999 && senha != 123){
		printf("senha incorreta");	
	}else if(usuario != 999 && senha==123){
		printf("usuario incorreto");
	}else{
		printf("usuario e senha incorreto");
	}
	return 0 ; 
}



