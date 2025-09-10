#include <stdio.h>

int main(){

    int opcao;
    char nome[20];
    int financeiro = 0;
    int suporte = 0;
    int comercial = 0;
    int soucliente = 0;
    int clientenovo = 0;
    int sair = 0;

    printf("Óla! Seja bem vindo(a) a nossa central de atentendimento\n");
    printf("1 - Já sou cliente\n");
    printf("2 - Quero contratar\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    if (opcao == 1){
     printf("Digite seu nome: ");
     scanf("%s", nome);
     soucliente ++;
    
        
     do{ 
        printf("\n_____________________________________\n");
        printf("\nOlá %s! Como podemos te ajudar? \n",nome);
        printf("Selecione uma das opções\n");
        printf("\n1 Financeiro \n");
        printf("2 Suporte técnico \n");
        printf("3 Comercial\n");
        printf("4 Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch (opcao){ 

        case 1:
            printf("\nVocê escolheu setor financeiro\n");
            printf("\nAguarde a atendente entrará em contato!\n");
            financeiro ++;
            break;
        case 2:

            printf("\nVocê escolheu suporte técnico\n");
            printf("\nAguarde, encontrando o técnico mais perto da sua residencia.\n");
            suporte ++;
            break;

        case 3:

            printf("\nVocê escolheu Comercial\n");
            printf("Entraremos em contato assim que possivel");
            comercial ++;
            break;
        case 4:
            printf("\nAgradecemos pelo seu contato e, se precisar de algo no futuro, não hesite em nos procurar!\n");
            printf("Tenha um excelente dia!");
            sair ++;
            break;
    
            default :
            printf("\nOpção invalida");
            }
     }while(opcao !=4);

    }else{
        printf("\nSeja bem vindo(a), ficamos felizes por querer ser nosso cliente!\n");
        printf("\nLogo você receber mais informações para contratar nossos serviços!\n");
        clientenovo ++;
    }
    
    printf("\nRelátorio de acessos\n");
    printf("\nJá são clientes: %d vezes\n", soucliente);
    printf("Querendo contratar: %d clientes\n", clientenovo);
    printf("Financeiro: %d vezes\n",financeiro);
    printf("Suporte: %d vezes\n", suporte);
    printf("Comercial: %d vezes\n", comercial);
    printf("Saidas: %d vezes\n", sair);

  return 0;

}