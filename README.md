# Projetos-Trabalhos

Algumas atividades desenvolvidas durante a faculdade que foram essenciais para meu desenvolvimento e aprendizado.

#######################################################################################################################

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

#######################################################################################################################

Enunciado do EP2_C
