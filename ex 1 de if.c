#include <stdio.h>

int main(){
	int ano ;
	
	printf("digite o ano para ver se e bissexto ou nao:");
	scanf("%d",&ano);
	
	if(ano%4==0){
		printf("o ano %d e bissexto ",ano);
	}else {
		printf("o ano nao e bissexto");
	}
	return 0 ; 
}

