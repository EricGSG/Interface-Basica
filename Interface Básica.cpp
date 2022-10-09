#include<stdio.h>
#include<locale.h>
#include<windows.h>
void AreaPerimetro(), terminar(), Vetorzim(), Matriz();
int op2,T=0;
main(){
	setlocale(LC_ALL, "Portuguese");
	char op;
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
		 AreaPerimetro();
		printf("\nProcesso Area e petimetro finalizado\n");
		 terminar();
	break;
	case '2':
		Vetorzim();
		terminar();
	break;
	case '3':
		Matriz();
		terminar();
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
void terminar(){
			printf("Oque deseja fazer agora?\n");
			printf(" \n |[1]-----------FINALIZAR A SESSÃO-----------|\n");
			printf(" |[2]---------------VOLTAR AO MENU-----------|\n");
			scanf("%d", &op2);
			if(op2==1)
			T++;
}
void AreaPerimetro(){
		float l, l2, a, p;
		int op3;
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

}
void Vetorzim()
{
 int i,k,aux,d,c,j; 
 int op3;
 int a[5], b[5], uni[10], inter[5],dif[5];
 int n=0;
 
printf("\n-qual-operação-voce-deseja-escolher-:\n");
printf("|[1]---------INTERSECÇÃO----------|\n");
printf("|[2]----------DIFERENÇA-----------|\n"); 
printf("|[3]-----------UNIÃO-------------|\n");
scanf("%d",&op3);
 //Intersecção
if(op3==1){					
for (i=0; i<=4; i++)
{

printf ("\n entre com o %d º elemento de A: ", i+1);
scanf("%d", &a[i]);
uni[i] = a[i];       

for( k=0; k<=i-1; k++){ 

if (a[i] == a[k]){
printf ("o valor informado ja existe no vetor A. \n", a[i]);
 i-=1;
}

}

}
printf ("\n");

for (i=0; i<=4; i++) // B
{
printf ("\n entre com o %d º elemento de B: ", i+1);
scanf("%d", &b[i]);
uni[i+5] = b[i];

for (k=0; k<=i-1; k++) 
{
if (b[i] == b[k]) 
	 
{
printf ("o numero %d ja existe no vetor B. \n", b[i]);
i-=1;
}

}
}	   


//fazendo a intersecção	   	   
c=0;
for(i=0;i<=4;i++)
for(j=0;j<=4;j++)
if(a[i]==b[j])
{
inter[c]=a[i];
c=c+1;
}
printf("os elementos da intersecção são:");
for(i=0;i<c;i++)
printf("\n %d",i+1,inter[i]);

							}

// Diferença
if(op3==2){	   
for (i=0; i<=4; i++) 
{

printf ("\n entre com o %d º elemento de A: ", i+1);
scanf("%d", &a[i]);
uni[i] = a[i];       

for( k=0; k<=i-1; k++){ 

if (a[i] == a[k]){
printf ("o valor informado ja existe no vetor A. \n", a[i]);
 i-=1;
}

}

}
printf ("\n");

for (i=0; i<=4; i++) 
{
printf ("\n entre com o %d º elemento de B: ", i+1);
scanf("%d", &b[i]);
uni[i+5] = b[i];

for (k=0; k<=i-1; k++) 
{
if (b[i] == b[k]) 
	 
{
printf ("o valor informado ja existe no vetor B. \n");
i-=1;
}
}
}	 	
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(a[i]==b[j])
				break;
		}
		if(j==5)
		{
			for(k=0;k<n;k++)
			{
				if(a[i]==dif[k])
					break;
			}
			if(k==n)
				dif[n++]=a[i];
		}
	}
	

	printf("\nSeus elementos diferentes presentes em A e B são:\n");

	for(k=0;k<n;k++)
    {
        printf("%i\n", dif[k]);
    }	
}

//União
if(op3 == 3){
	for (i=0; i<=4; i++)
{

printf ("\n entre com o %d º elemento de A: ", i+1);
scanf("%d", &a[i]);
uni[i] = a[i];     

for( k=0; k<=i-1; k++){ 

if (a[i] == a[k]){
printf ("o Valor informado ja existe no vetor A. \n", a[i]);
 i-=1;
}

}

}
printf ("\n");

for (i=0; i<=4; i++) 
{
printf ("\n entre com o %d º elemento de B: ", i+1);
scanf("%d", &b[i]);
uni[i+5] = b[i];

for (k=0; k<=i-1; k++) 
{
if (b[i] == b[k]) 
	 
{
printf ("O valor informado ja existe no vetor B. \n", b[i]);
i-=1;
}
}
}
for (i=0; i<=4; i++) 

{
uni[i] = a[i];
uni[5+i] = b[i];
}	

for(i=0;i<=8;i++)
for(d=i+1;d<=9;d++)
if(uni[i]>=uni[d])
{
aux=uni[i];
uni[i]=uni[d];
uni[d]=aux;
}
printf("\n \n o resultado da união");
	for(i=0;i<=9;i++){
	
			printf("\n %d",uni[i]);
}
}
}
void Matriz(){
	
	int MA[5][5], MB[5][5], r[5][5];
	int L, C, op3; // L= linha || C= coluna
printf("\n-qual-operação-voce-deseja-escolher-:\n");
printf("|[1]---------SOMA----------|\n");
printf("|[2]-------SUBTRAÇÃO-------|\n");
scanf("%d", &op3);
if(op3 == 1)
{

	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			printf("digite o valor da linha %d coluna %d matriz A\n ", L, C);
			scanf("%d", &MA[L][C] );
		}
	}
	// VALORES DA MATRIZ B
	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			printf("digite o valor da linha %d coluna %d da matriz B\n ", L, C);
			scanf("%d", &MB[L][C] );
		}
	}
	// Resultado 
	printf("Resultado da Soma da matriz A e B");
	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			r[L][C] = MA[L][C] + MB[L][C];
			printf("Result[%d][%d] = %d\n", L, C, r[L][C] );
		}
	}
}
if(op3 == 2)
{	
	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			printf("digite o valor da linha %d coluna %d da matriz A\n ", L, C);
			scanf("%d", &MA[L][C] );
		}
	}
	// VALORES DA MATRIZ B
	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			printf("digite o valor da linha %d coluna %d da matriz B\n ", L, C);
			scanf("%d", &MB[L][C] );
		}
	}
	// Resultado 
	printf("Resultado da Subtração das matrizes A e B");
	for(L=0;L<5;L++)
	{
		for(C=0;C<5;C++)
		{
			r[L][C] = MA[L][C] - MB[L][C];
			printf("Result[%d][%d] = %d\n", L, C, r[L][C] );
		}
	}
}
}
