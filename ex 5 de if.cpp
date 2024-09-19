#include <stdio.h>

int main(){
	char l; 
	
	printf("digite a letra maiuscula para ver se vogal:");
	scanf("%c",&l);
	
	if(l=='A'||l=='E'||l=='I'||l=='O'||l=='U'){
		printf("A letra %c e uma vogal",l);
	}else{
		printf("A letra %c e consoante",l);
	}
	return 0 ; 
}


