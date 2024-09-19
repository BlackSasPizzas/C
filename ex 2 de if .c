#include <stdio.h>

int main(){
	float km,t,vm;
	
	printf("digite a distancia percorrida:");
	scanf("%d",&km);
	printf("agora digite o tempo percorrido:");
	scanf("%d",&t);
	
	vm = km/t;
	
	if(vm>=110){
		printf("a velocidade foi maior que 110km por hora");
	}else{
		printf("a velocidade foi menor que 110km por hora");
	}
	return 0 ;
}



