#include <stdio.h>
#include <string.h>

int main() {
    int seg = 0, ter = 0, qua = 0, qui = 0, sex = 0, sab = 0, dom = 0;
    int opcao, dia, qtd, atividade;

    do {
        printf("\n==============================\n");
        printf("   ROTINA DE ATIVIDADE FÍSICA\n");
        printf("==============================\n");
        printf("1 - Registrar Atividade\n");
        printf("2 - Consultar Atividades por dia\n");
        printf("3 - Ver Top Day (dia com mais atividades)\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite o dia (1=Segunda, ..., 7=Domingo): ");
                scanf("%d", &dia);

                if (dia < 1 || dia > 7) {
                    printf("Dia inválido!\n");
                    break;
                }

                printf("\nEscolha a atividade:\n");
                printf("1 - Caminhada\n");
                printf("2 - Corrida\n");
                printf("3 - Musculação\n");
                printf("4 - Natação\n");
                printf("Opção: ");
                scanf("%d", &atividade);

                printf("Quantas vezes essa atividade foi feita? ");
                scanf("%d", &qtd);

                // Adiciona a quantidade ao dia correspondente
                switch(dia) {
                    case 1: seg += qtd; break;
                    case 2: ter += qtd; break;
                    case 3: qua += qtd; break;
                    case 4: qui += qtd; break;
                    case 5: sex += qtd; break;
                    case 6: sab += qtd; break;
                    case 7: dom += qtd; break;
                }

                // Confirmação
                switch(atividade) {
                    case 1: printf("Caminhada registrada!\n"); break;
                    case 2: printf("Corrida registrada!\n"); break;
                    case 3: printf("Musculação registrada!\n"); break;
                    case 4: printf("Natação registrada!\n"); break;
                    default: printf("Atividade inválida.\n");
                }
                break;

            case 2:
                printf("\nAtividades registradas por dia:\n");
                printf("Segunda-feira: %d\n", seg);
                printf("Terça-feira:   %d\n", ter);
                printf("Quarta-feira:  %d\n", qua);
                printf("Quinta-feira:  %d\n", qui);
                printf("Sexta-feira:   %d\n", sex);
                printf("Sábado:        %d\n", sab);
                printf("Domingo:       %d\n", dom);
                break;

            case 3: {
                // Calcula o Top Day
                int maior = seg;
                char top[20] = "Segunda-feira";

                if (ter > maior) { maior = ter; strcpy(top, "Terca-feira"); }
                if (qua > maior) { maior = qua; strcpy(top, "Quarta-feira"); }
                if (qui > maior) { maior = qui; strcpy(top, "Quinta-feira"); }
                if (sex > maior) { maior = sex; strcpy(top, "Sexta-feira"); }
                if (sab > maior) { maior = sab; strcpy(top, "Sabado"); }
                if (dom > maior) { maior = dom; strcpy(top, "Domingo"); }

                printf("\n📊 Top Day: %s com %d atividades!\n", top, maior);
                break;
            }

            case 4:
                printf("\nEncerrando o programa... Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
