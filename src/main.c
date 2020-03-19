/* Data de submissao: 18/marco/2020
 * Nome: Fernando Brasil Sales
 * RA: 265268
*/

#include <stdio.h>

#define TAM_BUFFER 1000

void invertaPalavra (char *palavra, int inicio, int fim);



int main() {
	char buffer[TAM_BUFFER];
	int i, j;

	fgets(buffer, TAM_BUFFER, stdin);

	for (i = 0; i < TAM_BUFFER && buffer[i] != '\n' && buffer[i] != '\0'; ++i) {
		if (buffer[i] == ' ')
			continue;
		for (j = i; buffer[j] != ' ' && buffer[j] != '\n' && buffer[j] != '\0'; ++j)
			;
		invertaPalavra(buffer, i, --j);
		i = j;
	}

	buffer[i] = '\n';
	printf("%s", buffer);

	return 0;
}



void invertaPalavra (char *palavra, int inicio, int fim) {
	char aux;

	while (inicio < fim) {
		aux = palavra[inicio];
		palavra[inicio++] = palavra[fim];
		palavra[fim--] = aux;
	}
}