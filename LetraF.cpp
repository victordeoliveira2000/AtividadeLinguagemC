#include <stdio.h>
int main () {
	char nome[40];
	char endereco[120];
	int telefone;
	printf("Qual seu nome completo?\n");
	scanf("%s",&nome);
	printf("Qual seu endereco completo?\n");
	scanf("%s",endereco);
	printf("Qual seu telefone?\n");
	scanf("%d",telefone);
	printf("Seu nome e %s\n",nome);
	printf("Reside em %s\n",endereco);
	printf("Seu contato é %d\n",telefone);
}
