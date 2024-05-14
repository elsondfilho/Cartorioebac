#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
   			 
int main()
   	{
   		 int opcao=0; //Definindo variáveis 
   		 setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
   		 printf("### Cartório da EBAC ###\n\n"); //inicio do menu
   		 printf("Escolha a opção desejada do menu\n\n");
   		 printf("\t1 - Registrar nomes\n");
   		 printf("\t2 - Consultar nomes\n");
   		 printf("\t3 - Deletar nomes\n\n");
   		 printf("Opção: ");//fim do menu
	}
