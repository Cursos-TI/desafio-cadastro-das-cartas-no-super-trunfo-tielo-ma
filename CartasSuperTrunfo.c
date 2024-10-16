#include <stdio.h>

int main() {

    //Declarando as variáveis:
    char nome_pais[40], nome_estado[40], nome_cidade[40], codigo[5];
    int npt;
    float pop, area, pib;
    //Aqui abaixo será a entrada do usúario, onde ele irá interagir com o terminal adicionando as informações das cartas.
   printf("========== SUPER TRUNFO - PAÍSES ========= \n");

    printf("Digite o nome do País: \n");
    fgets(nome_pais, 40, stdin);
    printf("Digite o nome do estado: \n");
    fgets(nome_estado, 40, stdin);
    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade, 40, stdin);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite o total da população da cidade de: %s", nome_cidade);
    scanf("%f", &pop);
    printf("Digite o tamanho em área da cidade de: %s" "km²", nome_cidade);
    scanf("%f", &area);
    printf("Digite o PIB da cidade de: %s", nome_cidade);
    scanf("%f", &pib);
    printf("Informe qual o número de pontos turísticos da cidade de %s", nome_cidade);
    scanf("%i", &npt);
    //Abaixo os codigos para imprimir os dados cadastrados das cartas.
    printf("VEJA ABAIXO OS DADOS DA SUA CARTA\n");
    printf("País: %s ", nome_pais);
    printf("Estado: %s ", nome_estado);
    printf("Cidade: %s ", nome_cidade);
    printf("Código da carta: %s \n", codigo);
    printf("Total da População: %.4f \n", pop);
    printf("Total em área: %.4f \n", area);
    printf("PIB da cidade: %.4f \n", pib);
    printf("Número de pontos turísticos: %i \n", npt);

    return 0;
}
