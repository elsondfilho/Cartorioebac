#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
   			 
int main()
   	{
   		 int opcao=0; //Definindo vari�veis 
   		 setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
   		 printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu
   		 printf("Escolha a op��o desejada do menu\n\n");
   		 printf("\t1 - Registrar nomes\n");
   		 printf("\t2 - Consultar nomes\n");
   		 printf("\t3 - Deletar nomes\n\n");
   		 printf("Op��o: ");//fim do menu
	}
