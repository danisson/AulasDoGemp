#include<stdio.h>

int main() {
	int hora,minuto; // Duas variáveis para guardar a hora
	                // que o usuário vai entrar.

	printf("Olá, que horas são? (hh:mm)\n");
	scanf("%d:%d",&hora,&minuto); // Quando vamos receber qualquer
	                             // coisa que não seja strings temos
	                            // que colocar um & antes da variável.

	printf("No Acre agora é %d:%d horas\n"
		   "E em Greenwich é %d:%d.\n",
		   hora-2,minuto,hora+3,minuto);

	return 0;
}