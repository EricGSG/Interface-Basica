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
			printf("O resultado dessa soma �: %f", R);
			break;
			case '-':
			R=V1-V2;
				printf("O resultado dessa subtra��o �: %f", R);
			break;
			case '*':
			R=V1*V2;
				printf("O resultado dessa multiplica��o �: %f", R);
			break;
			case '/':
			R=V1/V2;
			break;
				printf("O resultado dessa divis�o �: %f", R);
			default:
				printf("Digite uma opera��o valida");
				
			
	}
}
