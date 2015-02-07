#include<stdio.h>

int main() {
	char nome[50+1]; // Isto é uma variável, ela guarda valores
	                // Neste caso ela está guardando 51 caracteres
	               // Isso equivale a um texto de 50 caracteres.
	printf("Ola, qual seu nome?\n");
	scanf("%50[^\n]s",nome); // Aqui estamos falando que esperamos receber
	                        // 50 caracteres excluindo fim de linha <\n>
	                       // e guardaremos em <nome>

	printf("Bom dia %s\n",nome);

	return 0;
}