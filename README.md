# Projetos e Trabalhos

Algumas atividades desenvolvidas durante a faculdade que foram essenciais para meu desenvolvimento e aprendizado.

###########################################################################################

Enunciado do EP1_C:


Neste exercício-programa, n>0 peças são inicialmente dispostas numa mesa. Dois jogadores jogam alternadamente, retirando pelo menos uma e no máximom (m<=n) peças. Quem fizer a jogada que retira todas as últimas peças (até m) ganha o jogo. Seu trabalho consiste em implementar dois modos de jogo:

jogador versus jogador e
jogador versus computador.
Atenção: não é necessário mensagens adicionais para o usuário e nem verificação de consistência de dados, admite-se que os dados de entrada serão consistentes (e.g. não precisa verificar se usuário digitará valor menor ou igual à quantidade atual de peças).

No começo do jogo, o usuário terá a possibilidade de escolher qual modo deseja jogar. No modo [1] (jogador versus jogador), sempre o jogador 1 inicia o jogo e alternadamente os jogadores removem as peças até não mais sobrarem peças, e assim definir o vencedor. No modo [2] (jogador versus computador), o computador deve jogar seguindo uma estratégia “inteligente” descrita nos parágrafos seguintes.

Existe uma estratégia muito simples para (o primeiro "jogador") ganhar o jogo. A estratégia consiste em deixar sempre múltiplos de m+1 peças ao jogador oponente. Suponha que existam dois jogadores, o jogador humano e o computador. Sejam n e m como descritos anteriormente. Então existem dois cenários possíveis para o início do jogo:

se n é múltiplo de m+1, o computador deve ser “generoso” e convidar o jogador humano a iniciar a partida;
caso contrário, o computador toma a iniciativa de começar o jogo.
Uma vez iniciado o jogo, a estratégia do computador consiste em sempre deixar um número de peças que seja múltiplo de m+1 ao jogador humano.

Nos exemplos de saídas de um programa simulando o jogo, mostrados abaixo, as entradas do usuário correspondem aos textos em vermelho e as saídas do programa aos textos em azul.

Muito cuidado com a formatação, se você usar espaço em branco adicional ou usar algum caractere diferente (não use acentos!), o avaliador automático detectará como saída distinta e sua nota seria reduzida.

###########################################################################################

Enunciado do EP2_C

Criptografia é uma área da Ciência da Computação que estuda os métodos de comunicação secreta que transformam uma mensagem (textoplano) em uma mensagem cifrada (textocifrado), de forma que apenas o real receptor da mensagem seja capaz de restaurar o seu conteúdo original. O ato de transformar uma mensagem em uma mensagem cifrada é chamado de codificação e o ato contrário é chamado de decodificação. Um método bastante simples de codificação é o método Twist, que requer que ambos remetente e receptor combinem uma chave secreta k, que deve ser um inteiro positivo.

O método Twist utiliza quatro listas: textoplano, textocifrado, codigoplano e codigocifra; sendo textoplano e textocifrado listas de caracteres e codigoplano e codigocifra listas de inteiros. Todas as listas tem tamanho n, onde n é o tamanho da mensagem a ser codificada. As listas são iniciados na posição zero, de forma que os seus elementos são numerados de 0 a n-1. Para este problema, as mensagens apenas conterão letras minúsculas, pontos e underscores (representando espaços).

A mensagem a ser codificada é armazenada na lista textoplano. Dada a chave k, a codificação é feita da seguinte forma. Primeiro, as letras em textoplano são convertidas em códigos inteiros que são armazenados em codigoplano. A conversão é feita da seguinte forma: ‘_’ = 0, ‘a’ = 1, ‘b’ = 2, ..., ‘z’ = 26 e ‘.’ = 27. Depois, cada código em codigoplano é convertido em um código codificado em codigocifra através da seguinte fórmula: para todo i de 0 a n-1,

codigocifra[i] = (codigoplano[(k*i) mod n] - i) mod 28.

Do mesmo modo a decodificaćào é análoga (usando-se um inverso multiplicativo modular), devendo-se fazer

codigoplano[(k*i) mod n] = (codigocifra[i] + i) mod 28.

Aqui x mod y é o resto positivo da divisão de x por y. Por exemplo, 3 mod 7 = 3, 22 mod 8 = 6 e -1 mod 28 = 27. Você pode usar o operador ‘%’ do Python, desde que você some y caso o resultado seja menor que zero. Por último, os códigos obtidos em codigocifra são convertidos novamente em letras (pela mesma regra descrita anteriormente) e são armazenadas em textocifrado.

Usando a linguagem C, lembre-se que a leitura de cadeias de caracteres (string) é feita usando o formatador %s e automaticamente após o último caractere válido digitado (para a string), é registrado o finalizador '\0', por exemplo, o código seguinte lê e imprime string: char str[10]; scanf("%s", str); printf("%s\n", str);. Além disso, lembre-se que em C a diferença entre caractere (char) e inteiro (int) está no formatador, pois os bytes são convertidos para um ou para outro de acordo com o formatador e o mapa básico de codificação é o ASCII - American Standard Code for Information Interchange, que usava apenas 8 bits). Por exemplo, o caractere/dígito '0' tem código 48, o caractere/dígito '1' tem código 49 e assim por diante (esses valores vem do "velho" ASCII). Então pode-se usar a biblioteca string.h e a função strlen(char *) como ilustrado abaixo.

#include <stdio.h>
#include <string.h>
#define MAX 256
void converteInt2Char (int n, char string[], int vet[]) {
  int i;
  for (i=0; i<n; i++)
    string[i] = vet[i];
  string[n] = '\0'; // finalizador para usar %s
  }
void main (void) {
  char vetChar[MAX]; int vetInt[max]; int n, i;
  scanf("%d", &n);
  for (i=0; i<n; i++)
    scanf("%d", &vetInt[i]); // entrar dados como inteiros (via codigo ASCII dos caracteres)
  converteInt2Char(n, vetChar, vetInt);
  print("String tem %d caracteres e os caracteres como string: %s\n", strlen(vetChar), vetChar);
  }
  
3. Atenção, muito cuidado com o alfabeto a ser utilizado! Para certificar-se que está na ordem correta (para Python: primeiro teste as funções ord(char) e chr(int); para C: teste as conversões char/int (char c; int i; print("%d %c\n%d %c\n", i, c, c, i);). Faça um programa para gerar os caracteres de 'a' até 'z' e seus códigos ASCII. Além disso, se o Python instalado no Moodle/VPL for a versão, é preciso usar o comando raw_input() para ler a mensagem.

4. Os códigos dos caracteres são sequências, sendo 97 o código do 'a', 98 o código do 'b' e assim por diante. Neste EP pode-se supor que serão digitados apenas letras minúsculas (logo entre 'a' e 'z'), ponto '.' ou "barra baixa" '_'.

2. Tarefa
Sua tarefa é escrever um programa que codifica e decodifica uma mensagem usando o método Twist. Inicialmente o usuário escolhe a opção 0 (codifica) ou 1 (decodifica), sendo:

0: o usuário deve, a seguir, digitar o valor k da chave e depois uma frase (que será codificada);

1: o usuário deve, a seguir, digitar o valor k da chave e depois uma frase (que será decodificada).

Por exemplo, se o usuário digitar 1, 5 e ‘cs.’, seu programa deve invocar a função de decoficação (com os parâmetros adequados) e devolver ‘ola’ (correspondendo ao texto decodificado). Então o programa principal deve imprimir o texto original (decodificado) ‘ola’.

3. Entrada e saídas de dados
A entrada será via teclado. Primeiramente deve-se digitar a opção (0 ou 1), depois digita-se a chave k e por último a mensagem (a ser codificaca ou decodificada). Supondo-se ser n o tamanho da mensagem, pode-se supor que n esteja entre 1 e 70 caracteres. A chave k será um inteiro positivo menor ou igual a 300 tal que k e n sejam primos entre si, ou seja, mdc(k, n) = 1. Abaixo 3 exemplos de codificações/decodificações, para as chaves 5, 11 e 29.
