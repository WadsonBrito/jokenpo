# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (){
    int escolhajogador, escolhapc;

    srand (time(0));

    printf(" #### Jogo Jokenpô (pedra, papel tesoura) ####\n");
    printf(" ### Escolha uma opção ###\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogador);

    escolhapc = rand() % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    default:
        printf("Opção Invalida\n");
        break;
    }
    switch (escolhapc)
    {
        case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }
    if(escolhajogador == escolhapc){
        printf(" ##### JOGO EMPATOU! #####\n");
    } else if ((escolhajogador == 1) && (escolhapc == 3) || (escolhajogador == 2) && (escolhapc == 1) || (escolhajogador == 3) && (escolhapc ==2)){
        printf(" ##### PARABÉNS! VOCÊ GANHOU #####\n");
    } else {
        printf(" ##### VOCÊ PERDEU =( #####\n");
    }
return 0;
}
