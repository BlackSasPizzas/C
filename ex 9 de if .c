#include <stdio.h>

int main(){
	float sal,imposto,hora,salfinal;
	
	printf("digite as horas que voce trabalhou:");
	scanf("%f",&hora);
	
	sal = 19.50*hora;
	
	if(sal>1500){
		imposto = sal*0.1;
		salfinal = sal - imposto;
		printf("o seu salario %.2f menos imposto de %.2f agora e %.2f",sal,imposto,salfinal);
	}else{
		printf("seu salario e menor que R$1500");
	}
	return 0 ; 
}


