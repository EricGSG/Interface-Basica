#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "portuguese");
	char op;
	printf("|----------------------------------------------------|\n");
	printf("|-----------------MENU DE OP��ES---------------------|\n");
	printf("|----------------------------------------------------|\n");
	printf("|[1] - Inserir                                       |\n");
	printf("|[2] - Remover                                       |\n");
	printf("|[3] - Consulta                                      |\n");
	printf("|[4] - Sair                                          |\n");
	printf("|----------------------------------------------------|\n");
	printf("|Digite a op��o desejada:                            |");
	scanf("%c", &op);
	switch(op){
		case '1':
			printf("Simulando inclus�o...");
			break;
			case '2':
			printf("Simulando remo��o...");
			break;
			case '3':
			printf("Simulando Consulta...");
			break;
			case '4':
			printf("Obrigado por utilizar nosso sistema!!");
			break;
			default:
				printf("Digite uma op��o valida!\n");
			
	}
}
