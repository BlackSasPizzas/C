#include <stdio.h>

int main(){
	int ano,idadepravoto;
	
	printf("em que ano voce nasceu:");
	scanf("%d",&ano);
	
	idadepravoto=2024-ano;
	
	if(idadepravoto>=18){
		printf("voce pode votar");
	}else{
		printf("voce nao pode votar ainda");
	}
	return 0 ; 
}


