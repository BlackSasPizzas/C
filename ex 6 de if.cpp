#include <stdio.h>

int main(){
	int i;
	
	printf("digite sua idade:");
	scanf("%d",&i);
	
	if(i<16){
		printf("nao eleitor");
	}else if(i>=16 && i<=18 || i>65){
		printf("eleitor facultativo");
	}else if(i>18 || i<65){
		printf("eleitor obrigatorio");
	}
	return 0 ; 
}


