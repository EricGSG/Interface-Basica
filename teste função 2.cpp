#include<stdio.h>
#include<locale.h>
#include<windows.h>
void finalizar();
int op2;
main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
	int T=0;
	int op3;
	float l, l2, a, p;
	while(T<=0){
	printf("Selecione o serviço que deseja utilizar.\n");
	printf(" \n |[1]-----------AREA E PERÍMETRO-----------|\n");
	printf(" |-----------------------------------------|\n");
	printf(" |[2]---------------VETOR------------------|\n");
	printf(" |-----------------------------------------|\n");
	printf(" |[3]---------------MATRIZ-----------------|\n");
	printf(" |-----------------------------------------|\n");
	printf(" |[4]----------------SAIR------------------|\n");
	printf(" |-----------------------------------------|\n");
	
	scanf("%c", &op);
	switch(op){
		case '1':
			printf("Escolha a forma que você deseja usar para saber a area e perímetro:\n");
			printf(" \n |[1]-----------QUADRADO-----------|\n");
			printf(" |[2]-----------RETANGULO----------|\n");
			scanf("%d", &op3);
				if(op3==1){
						printf("informe o tamanho dos lados do quadrado: ");
						scanf("%f", &l);
						if(l<=0)
						printf("O valor informado é inválido");
						else {
						(a= l*l);
						(p= l*4);
						printf("\nA area do quadrado informado é %.2f, e o perimetro do mesmo é %.2f", a, p);
					}
						}
				if(op3==2){
						printf("informe o tamanho do lado 1 do retangulo: ");
						scanf("%f", &l);
						printf("informe o tamanho do lado 2 do retangulo: ");
						scanf("%f", &l2);
					if((l<=0)||(l2<=0))
					printf("Um valor informado é inválido");
					else{
						(a= l*l2);
						(p= (l*2)+(l2*2));
						printf("\nA area do retangulo informado é %.2f, e o perimetro do mesmo é %.2f", a, p);
						}
						}

			printf("\nProcesso Area e petimetro finalizado\n");
			finalizar();
	break;
	case '2':
	printf("Processo Vetor finalizado\n");
finalizar();
	break;
	case '3':
	printf("Processo Matriz finalizado\n");
	finalizar();
	break;
		case '4':
			T++;
			break;
			
		}
		system("cls");
}
if((op=='4')||(op2==1))
{printf("Obrigado pela preferencia");
}
}
void finalizar(){
		int op2;
		int T=0;
		printf("Oque deseja fazer agora?\n");
	printf(" \n |[1]-----------FINALIZAR A SESSÃO-----------|\n");
	printf(" |[2]---------------VOLTAR AO MENU-----------|\n");
	scanf("%d", &op2);
	if(op2==1)
	T++;
	
}
