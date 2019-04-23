#include <stdio.h>
#include <string.h>
#define MAX 256



int char2int(char c, char vetor[]) { //função que transforma char em int
	int y, ic;
	for (y = 0; y <= 27; y++) {
		if (c == vetor[y]) {
			ic = y;
		}
	}
	return ic;
}



void codificar(int chave, char mensagem[], char caracteres[]) { // função que codifica a mensagem 
	int l = strlen(mensagem);
	int g,i,j,m, codigoplano[l], codigocifra[l];
	char textocifrado[l + 1];
	
	
	for (i = 0; i <= l - 1; i++) { // criar lista codigoplano, que tem o numero correspondente a cada letra 
		codigoplano[i] = char2int(mensagem[i], caracteres);
	}
	
	for (j = 0; j <= l - 1; j++) { // criar lista codigocifra, com os numeros criptografados
		if ((((codigoplano[(chave*j) % l] - j) % 28)) < 0){
			codigocifra[j] = ((codigoplano[(chave*j) % l] - j) % 28) + 28;
		}
		else {
			codigocifra[j] = ((codigoplano[(chave*j) % l] - j) % 28);
		}
		
	}
	
	for (m = 0; m <= l - 1; m++) { // criar lista textocifrado, com o texto já codificado
		textocifrado[m] = caracteres[codigocifra[m]];
	}
	
	textocifrado[l] = '\0';
	
	printf("Frase final: %s", textocifrado);	
}

void decodificar(int chave, char mensagem[], char caracteres[]) { // função que decodifica a mensagem - em construção
	int l = strlen(mensagem);
	int g,i,j,m, codigoplano[l], codigocifra[l];
	char textocifrado[l];
	
	
		
	for (i = 0; i <= l - 1; i++) { // criar lista codigoplano, que tem o numero correspondente a cada letra 
		codigocifra[i] = char2int(mensagem[i], caracteres);
	}
	
	for (j = 0; j <= l - 1; j++) { // criar lista codigocifra
		if (((codigocifra[j] + j) % 28) < 0){
			codigoplano[(chave*j) % l] = ((codigocifra[j] + j) % 28) + 28;
		}
		else {
			codigoplano[(chave*j) % l] = ((codigocifra[j] + j) % 28);
		}
		
	}
	
	for (m = 0; m <= l - 1; m++) { // criar lista textocifrado, com o texto já decodificado
		textocifrado[m] = caracteres[codigoplano[m]];
	}
	
	textocifrado[l] = '\0';
	
	printf("Frase final: %s", textocifrado);	
}

int main(){
	// definição das variáveis
    char caracteres[28],letra = 'a', mensagem[MAX];
    int i,j = strlen(mensagem),d,chave;
    
    
	// construção do vetor caracteres, que contém as letras do alfabeto, underscore e ponto final.	
	caracteres[0] = '_';
    caracteres[27] = '.';    
    for (i = 1; i <= 26; i++) {
    	caracteres[i] = letra;
    	letra = letra + 1;
	}
		
	// inicio do programa
	
	printf("Digite 0 para codificar e 1 para decodificar: ");
	scanf("%d", &d);
	
	if (d == 0) { // codificação
		printf("Digite a chave: ");
		scanf("%d", &chave);
		printf("Digite a mensagem: ");
		scanf("%s", &mensagem);
		char codigo[j];
		codificar(chave, mensagem, caracteres);		
	}
	else { // decodificação
		printf("Digite a chave: ");
		scanf("%d", &chave);
		printf("Digite a mensagem: ");
		scanf("%s", &mensagem);
		char codigo[j];
		decodificar(chave, mensagem, caracteres);
		}

    return 0;
}
