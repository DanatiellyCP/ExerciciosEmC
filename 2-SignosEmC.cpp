#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h> 

// Esse algoritmo serve para descobrir o signo de uma pessoa
//fornecendo o dia e o m�s de nacsimento.

int main () {
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	int mes, dia; //variaveis  
	int r; // para ler resposta do usuario
	
	
	do{
		printf("\nDeseja pesquisar seu Signo ?\n");
		printf("Se Sim digite 1 se N�o digite 0 \n");
		scanf("%d", &r);
		
		if (r == 1 ){
	
			printf("Informe o n�mero do m�s do seu anivers�rio: \n");
			scanf("%d",&mes);
			printf("Informe o n�mero dia que voc� nasceu: \n");
    		scanf("%d", &dia); 
    	
     		if (((mes == 1) && (dia >= 20)) || ((mes == 2 )&&(dia <= 18 )))
             	{
                   printf("Voc� � do signo de Aquario\n");
             	}
    		if (((mes == 2) && (dia >= 19)) || ((mes == 3 )&&(dia <= 20 )))
             	{
                   printf("Voc� � do signo de Peixes\n");
             	}
    		if (((mes == 3) && (dia >= 21)) || ((mes == 4 )&&(dia <= 19 )))
             	{
                   printf("Voc� � do signo de Aries\n");
             	}
    		if (((mes == 4) && (dia >= 20)) || ((mes == 5 )&&(dia <= 20 )))
             	{
                   printf("Voc� � do signo de Touro\n");
             	}
    		if (((mes == 5) && (dia >= 21)) || ((mes == 6 )&&(dia <= 20 )))
             	{
                   printf("Voc� � do signo de Gemeos\n");
             	}
    		if (((mes == 6) && (dia >= 21)) || ((mes == 7 )&&(dia <= 22 )))
             	{
                   printf("Voc� � do signo de Cancer\n");
             	}
    		if (((mes == 7) && (dia >= 23)) || ((mes == 8 )&&(dia <= 22 )))
             	{
                   printf("Voc� � do signo de Le�o\n");
             	}
    		if (((mes == 8) && (dia >= 23)) || ((mes == 9 )&&(dia <= 22 )))
             	{
                   printf("Voc� � do signo de Virgem\n");
             	}
    		if (((mes == 9) && (dia >= 23)) || ((mes == 10 )&&(dia <= 22 )))
             	{
                   printf("Voc� � do signo de Libra\n");
             	}
    		if (((mes == 10) && (dia >= 23)) || ((mes == 11 )&&(dia <= 21 )))
             	{
                   printf("Voc� � do signo de Escorpi�o\n");
             	}
    		if (((mes == 11) && (dia >= 22)) || ((mes == 12 )&&(dia <= 21 )))
             	{
                   printf("Voc� � do signo de Sargitario\n");
             	}
    		if (((mes == 12) && (dia >= 22)) || ((mes == 1 )&&(dia <= 19 )))
             	{
                   printf("Voc� � do signo de Capric�rnio\n");
             	}
		}
		else {
			printf("Voc� finalizou  programa.\nAperte qualquer tecla para sair.");
		}
	} while (r != 0);	
	   
    getch();
    	
}

