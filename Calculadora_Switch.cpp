#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	float V1, V2, R;
	char op;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &V1);
	printf("Digite o segundo valor: ");
	scanf("%f", &V2);
	printf("Digite a operacao a ser feita: ");
	scanf(" %c", &op);
	
	switch(op){
		case '+':
			R=V1+V2;
			printf("O resultado dessa soma é: %f", R);
			break;
			case '-':
			R=V1-V2;
				printf("O resultado dessa subtração é: %f", R);
			break;
			case '*':
			R=V1*V2;
				printf("O resultado dessa multiplicação é: %f", R);
			break;
			case '/':
			R=V1/V2;
			break;
				printf("O resultado dessa divisão é: %f", R);
			default:
				printf("Digite uma operação valida");
				
			
	}
}
