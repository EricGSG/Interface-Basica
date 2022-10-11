#include<stdio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL, "portuguese");
	char op;
	printf("|----------------------------------------------------|\n");
	printf("|-----------------MENU DE OPÇÕES---------------------|\n");
	printf("|----------------------------------------------------|\n");
	printf("|[1] - Inserir                                       |\n");
	printf("|[2] - Remover                                       |\n");
	printf("|[3] - Consulta                                      |\n");
	printf("|[4] - Sair                                          |\n");
	printf("|----------------------------------------------------|\n");
	printf("|Digite a opção desejada:                            |");
	scanf("%c", &op);
	switch(op){
		case '1':
			printf("Simulando inclusão...");
			break;
			case '2':
			printf("Simulando remoção...");
			break;
			case '3':
			printf("Simulando Consulta...");
			break;
			case '4':
			printf("Obrigado por utilizar nosso sistema!!");
			break;
			default:
				printf("Digite uma opção valida!\n");
			
	}
}
