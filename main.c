#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    int codigo;
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Escolha do atributo a ser comparado
    int opcao;
    printf("\nQual atributo deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparação:\n");

    switch (opcao) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("Carta 1 venceu (maior população).\n");
            else if (carta2.populacao > carta1.populacao)
                printf("Carta 2 venceu (maior população).\n");
            else
                printf("Empate na população.\n");
            break;
        case 2:
            if (carta1.area > carta2.area)
                printf("Carta 1 venceu (maior área).\n");
            else if (carta2.area > carta1.area)
                printf("Carta 2 venceu (maior área).\n");
            else
                printf("Empate na área.\n");
            break;
        case 3:
            if (carta1.pib > carta2.pib)
                printf("Carta 1 venceu (maior PIB).\n");
            else if (carta2.pib > carta1.pib)
                printf("Carta 2 venceu (maior PIB).\n");
            else
                printf("Empate no PIB.\n");
            break;
        case 4:
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Carta 1 venceu (mais pontos turísticos).\n");
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Carta 2 venceu (mais pontos turísticos).\n");
            else
                printf("Empate nos pontos turísticos.\n");
            break;
        case 5: {
            float dens1 = carta1.populacao / carta1.area;
            float dens2 = carta2.populacao / carta2.area;
            if (dens1 < dens2)
                printf("Carta 1 venceu (menor densidade populacional).\n");
            else if (dens2 < dens1)
                printf("Carta 2 venceu (menor densidade populacional).\n");
            else
                printf("Empate na densidade populacional.\n");
            break;
        }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
