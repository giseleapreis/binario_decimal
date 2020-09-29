#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main()
{

int escolha=1;

while (escolha!=3)
{

printf("\n\n Qual tipo de conversao deseja fazer? ");

printf("\n Decimal para binario - Opcao 1 ");
printf("\n Binario para decimal - Opcao 2 ");
printf("\n 3 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);


switch (escolha) {

case 1:
{

printf("\n\n Opcao escolhida: Decimal para binario ");
{
 int n; 
 int r; 
 int i; 

 printf("\n\n Digite um numero: ");
 scanf("%d", &n);

  for(i = 7; i >= 0; i--) {
    
    r = n >> i;
     if(r & 1) {
        printf("1");
     } else {
        printf("0");
     }
 }

 printf("\n");

}
break;
}

case 2:
{

printf("\n\n Opcao escolhida: Binario para decimal ");
{
	char numero[10];
	printf("\n\n Digite um numero: ");
	scanf("%s", &numero);
 
	int i, tam, novoValor = 0;
	tam = strlen(numero); 
	
		
	for (i = tam-1; i >= 0; i--) {
		
		if (numero[i] == '1') {
			novoValor += pow(2,tam-1-i);
					}
				
		printf("Decimal: %i", novoValor);
	}
	
	
	
	
	break;
}



if( escolha==3)
{
continue;
}

printf("\n\n Nenhuma opcao foi escolhida ");
break;
}

}

}

if( escolha==3)
printf("\n\n O Programa foi fechado");
 
return 0;
}
