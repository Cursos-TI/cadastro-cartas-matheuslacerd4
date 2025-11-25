
#include <stdio.h>

int main() {
    // ========== DECLARAÇÃO DE VARIÁVEIS PARA CARTA 1 ==========
    char estado1[3], codigoDaCarta1[4], nomeDaCidade1[50];
    int  pontosTuristicos1;
    unsigned long int populacao1;
    float area1, PIB1, densidadePopulacional1, PIBperCapita1, superPoder1;

    // ========== DECLARAÇÃO DE VARIÁVEIS PARA CARTA 2 ==========
    char estado2[3], codigoDaCarta2[4], nomeDaCidade2[50];
    int  pontosTuristicos2;
    unsigned long int populacao2;
    float area2, PIB2, densidadePopulacional2, PIBperCapita2, superPoder2;



    // ---------- CARTA 1 ----------
    printf("Digite o estado da Carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%3s", codigoDaCarta1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeDaCidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (populacao1 / area1);
    PIBperCapita1 = (PIB1 / populacao1);
    superPoder1 = (populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1));

    // ---------- CARTA 2 ----------
    printf("\nDigite o estado da Carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%3s", codigoDaCarta2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeDaCidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (populacao2 / area2);
    PIBperCapita2 = (PIB2 / populacao2);
    superPoder2 = (populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2));


    // ---------- EXIBIÇÃO ----------
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita2);


    int opcao, modoJogo;
    char continuar = 's';

    // Menu para escolher modo de jogo
    printf("\n╔════════════════════════════════════════╗\n");
    printf("║        MODOS DE JOGO SUPER TRUNFO    ║\n");
    printf("╚════════════════════════════════════════╝\n");
    printf("1. Comparação com Um Atributo\n");
    printf("2. Comparação com Dois Atributos\n");
    printf("0. Sair\n");
    printf("════════════════════════════════════════\n");
    printf("Escolha o modo: ");
    scanf("%d", &modoJogo);

    if (modoJogo == 0) {
        printf("\n✓ Obrigado por jogar! Até logo!\n");
        return 0;
    }

    if (modoJogo == 2) {
        // ========== FASE 3: COMPARAÇÃO COM DOIS ATRIBUTOS ==========
        int atributo1 = 0, atributo2 = 0;
        float valor1Attr1 = 0, valor2Attr1 = 0, valor1Attr2 = 0, valor2Attr2 = 0;
        float soma1 = 0, soma2 = 0;
        char continuar_comparar = 's';

        while (continuar_comparar == 's' || continuar_comparar == 'S') {
            atributo1 = 0;
            atributo2 = 0;

            // Primeira escolha de atributo
            printf("\n╔════════════════════════════════════════╗\n");
            printf("║   ESCOLHA DO PRIMEIRO ATRIBUTO       ║\n");
            printf("╚════════════════════════════════════════╝\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            printf("════════════════════════════════════════\n");
            printf("Escolha o primeiro atributo: ");
            scanf("%d", &atributo1);

            if (atributo1 < 1 || atributo1 > 7) {
                printf("\n✗ ERRO: Opção inválida! Tente novamente.\n");
                continue;
            }

            // Segunda escolha de atributo (Menu dinâmico - exclui o primeiro)
            printf("\n╔════════════════════════════════════════╗\n");
            printf("║   ESCOLHA DO SEGUNDO ATRIBUTO        ║\n");
            printf("║   (Não pode ser igual ao primeiro)   ║\n");
            printf("╚════════════════════════════════════════╝\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder\n");
            printf("════════════════════════════════════════\n");
            printf("Escolha o segundo atributo: ");
            scanf("%d", &atributo2);

            // Validação: não pode escolher o mesmo atributo duas vezes
            if (atributo2 < 1 || atributo2 > 7) {
                printf("\n✗ ERRO: Opção inválida! Tente novamente.\n");
                continue;
            }

            if (atributo1 == atributo2) {
                printf("\n✗ ERRO: Você selecionou o mesmo atributo duas vezes!\n");
                printf("Por favor, escolha dois atributos diferentes.\n");
                continue;
            }

            // Função para obter valores dos atributos selecionados
            // Primeiro atributo
            switch(atributo1) {
                case 1:
                    valor1Attr1 = (float)populacao1;
                    valor2Attr1 = (float)populacao2;
                    break;
                case 2:
                    valor1Attr1 = area1;
                    valor2Attr1 = area2;
                    break;
                case 3:
                    valor1Attr1 = PIB1;
                    valor2Attr1 = PIB2;
                    break;
                case 4:
                    valor1Attr1 = (float)pontosTuristicos1;
                    valor2Attr1 = (float)pontosTuristicos2;
                    break;
                case 5:
                    valor1Attr1 = densidadePopulacional1;
                    valor2Attr1 = densidadePopulacional2;
                    break;
                case 6:
                    valor1Attr1 = PIBperCapita1;
                    valor2Attr1 = PIBperCapita2;
                    break;
                case 7:
                    valor1Attr1 = superPoder1;
                    valor2Attr1 = superPoder2;
                    break;
            }

            // Segundo atributo
            switch(atributo2) {
                case 1:
                    valor1Attr2 = (float)populacao1;
                    valor2Attr2 = (float)populacao2;
                    break;
                case 2:
                    valor1Attr2 = area1;
                    valor2Attr2 = area2;
                    break;
                case 3:
                    valor1Attr2 = PIB1;
                    valor2Attr2 = PIB2;
                    break;
                case 4:
                    valor1Attr2 = (float)pontosTuristicos1;
                    valor2Attr2 = (float)pontosTuristicos2;
                    break;
                case 5:
                    valor1Attr2 = densidadePopulacional1;
                    valor2Attr2 = densidadePopulacional2;
                    break;
                case 6:
                    valor1Attr2 = PIBperCapita1;
                    valor2Attr2 = PIBperCapita2;
                    break;
                case 7:
                    valor1Attr2 = superPoder1;
                    valor2Attr2 = superPoder2;
                    break;
            }

            // Obter nomes dos atributos
            const char* nomeAtributos[] = {
                "",
                "População",
                "Área",
                "PIB",
                "Pontos Turísticos",
                "Densidade Populacional",
                "PIB per Capita",
                "Super Poder"
            };

            // Exibição do resultado com os dois atributos
            printf("\n╔════════════════════════════════════════════════════╗\n");
            printf("║     COMPARAÇÃO COM DOIS ATRIBUTOS                ║\n");
            printf("╚════════════════════════════════════════════════════╝\n");

            printf("\n--- ATRIBUTO 1: %s ---\n", nomeAtributos[atributo1]);
            printf("%s: %.2f\n", nomeDaCidade1, valor1Attr1);
            printf("%s: %.2f\n", nomeDaCidade2, valor2Attr1);

            // Verificar regra de densidade (menor vence para densidade)
            int vencedorAttr1 = 0;
            if (atributo1 == 5) {  // Densidade populacional
                vencedorAttr1 = (valor1Attr1 < valor2Attr1) ? 1 : (valor2Attr1 < valor1Attr1) ? 2 : 0;
                printf("(Nota: Menor valor vence para Densidade)\n");
            } else {
                vencedorAttr1 = (valor1Attr1 > valor2Attr1) ? 1 : (valor2Attr1 > valor1Attr1) ? 2 : 0;
            }

            // Usar operador ternário para exibir resultado
            printf("Resultado: %s\n", 
                vencedorAttr1 == 1 ? nomeDaCidade1 :
                vencedorAttr1 == 2 ? nomeDaCidade2 :
                "Empate neste atributo");

            printf("\n--- ATRIBUTO 2: %s ---\n", nomeAtributos[atributo2]);
            printf("%s: %.2f\n", nomeDaCidade1, valor1Attr2);
            printf("%s: %.2f\n", nomeDaCidade2, valor2Attr2);

            int vencedorAttr2 = 0;
            if (atributo2 == 5) {  // Densidade populacional
                vencedorAttr2 = (valor1Attr2 < valor2Attr2) ? 1 : (valor2Attr2 < valor1Attr2) ? 2 : 0;
                printf("(Nota: Menor valor vence para Densidade)\n");
            } else {
                vencedorAttr2 = (valor1Attr2 > valor2Attr2) ? 1 : (valor2Attr2 > valor1Attr2) ? 2 : 0;
            }

            printf("Resultado: %s\n",
                vencedorAttr2 == 1 ? nomeDaCidade1 :
                vencedorAttr2 == 2 ? nomeDaCidade2 :
                "Empate neste atributo");

            // Soma dos atributos
            soma1 = valor1Attr1 + valor1Attr2;
            soma2 = valor2Attr1 + valor2Attr2;

            printf("\n┌──────────────────────────────────────┐\n");
            printf("│      SOMA FINAL DOS ATRIBUTOS      │\n");
            printf("└──────────────────────────────────────┘\n");
            printf("%s: %.2f + %.2f = %.2f\n", nomeDaCidade1, valor1Attr1, valor1Attr2, soma1);
            printf("%s: %.2f + %.2f = %.2f\n", nomeDaCidade2, valor2Attr1, valor2Attr2, soma2);

            // Operador ternário para determinar vencedor geral
            printf("\n");
            printf("┌──────────────────────────────────────┐\n");
            printf("│         VENCEDOR DA RODADA         │\n");
            printf("└──────────────────────────────────────┘\n");

            // Versão corrigida sem usar std (C puro)
            if (soma1 > soma2) {
                printf("✓ %s VENCE! Soma: %.2f\n", nomeDaCidade1, soma1);
            } else if (soma2 > soma1) {
                printf("✓ %s VENCE! Soma: %.2f\n", nomeDaCidade2, soma2);
            } else {
                printf("→ Empate! Ambas têm soma: %.2f\n", soma1);
            }

            printf("\nDeseja fazer outra comparação de dois atributos? (s/n): ");
            scanf(" %c", &continuar_comparar);
        }

        printf("\n✓ Obrigado por jogar! Até logo!\n");
        return 0;
    }

    while (continuar == 's' || continuar == 'S') {
        // Exibição do menu com bordas visuais (requisito de usabilidade)
        printf("\n╔════════════════════════════════════════╗\n");
        printf("║   MENU DE COMPARAÇÃO DE ATRIBUTOS    ║\n");
        printf("╚════════════════════════════════════════╝\n");
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Pontos Turísticos\n");
        printf("5. Comparar Densidade Populacional\n");
        printf("6. Comparar PIB per Capita\n");
        printf("7. Comparar Super Poder\n");
        printf("0. Sair\n");
        printf("════════════════════════════════════════\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // ========== REQUISITO 2 e 3: COMPARAÇÃO COM IF-ELSE ANINHADO ==========
        // Estrutura switch para seleção de atributo
        // Cada case implementa lógica de comparação com if-else aninhado
        switch(opcao) {
            case 1: {
                // ===== COMPARAÇÃO 1: POPULAÇÃO =====
                // Regra: Maior população vence
                printf("\n┌─ COMPARAÇÃO: POPULAÇÃO ─┐\n");
                printf("%s: %lu habitantes\n", nomeDaCidade1, populacao1);
                printf("%s: %lu habitantes\n", nomeDaCidade2, populacao2);
                
                // IF-ELSE ANINHADO: Primeiro nível compara, segundo valida
                if (populacao1 > populacao2) {
                    // Segundo nível: validação de valor positivo
                    if (populacao1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %lu habitantes\n", populacao1 - populacao2);
                    }
                } else if (populacao2 > populacao1) {
                    if (populacao2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %lu habitantes\n", populacao2 - populacao1);
                    }
                } else {
                    // REQUISITO 4: Mensagem de empate clara
                    printf("\n→ Empate! Ambas têm %lu habitantes\n", populacao1);
                }
                printf("└──────────────────────────┘\n");
                break;
            }

            case 2: {
                // ===== COMPARAÇÃO 2: ÁREA =====
                // Regra: Maior área vence
                printf("\n┌─ COMPARAÇÃO: ÁREA ─┐\n");
                printf("%s: %.2f km²\n", nomeDaCidade1, area1);
                printf("%s: %.2f km²\n", nomeDaCidade2, area2);
                
                if (area1 > area2) {
                    if (area1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %.2f km²\n", area1 - area2);
                    }
                } else if (area2 > area1) {
                    if (area2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %.2f km²\n", area2 - area1);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm %.2f km²\n", area1);
                }
                printf("└─────────────────────┘\n");
                break;
            }

            case 3: {
                // ===== COMPARAÇÃO 3: PIB =====
                // Regra: Maior PIB vence
                printf("\n┌─ COMPARAÇÃO: PIB ─┐\n");
                printf("%s: R$ %.2f bilhões\n", nomeDaCidade1, PIB1);
                printf("%s: R$ %.2f bilhões\n", nomeDaCidade2, PIB2);
                
                if (PIB1 > PIB2) {
                    if (PIB1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: R$ %.2f bilhões\n", PIB1 - PIB2);
                    }
                } else if (PIB2 > PIB1) {
                    if (PIB2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: R$ %.2f bilhões\n", PIB2 - PIB1);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm R$ %.2f bilhões\n", PIB1);
                }
                printf("└────────────────────┘\n");
                break;
            }

            case 4: {
                // ===== COMPARAÇÃO 4: PONTOS TURÍSTICOS =====
                // Regra: Maior número de pontos vence
                printf("\n┌─ COMPARAÇÃO: PONTOS TURÍSTICOS ─┐\n");
                printf("%s: %d pontos\n", nomeDaCidade1, pontosTuristicos1);
                printf("%s: %d pontos\n", nomeDaCidade2, pontosTuristicos2);
                
                if (pontosTuristicos1 > pontosTuristicos2) {
                    if (pontosTuristicos1 >= 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %d pontos\n", pontosTuristicos1 - pontosTuristicos2);
                    }
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    if (pontosTuristicos2 >= 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %d pontos\n", pontosTuristicos2 - pontosTuristicos1);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm %d pontos turísticos\n", pontosTuristicos1);
                }
                printf("└──────────────────────────────────┘\n");
                break;
            }

            case 5: {
                // ===== COMPARAÇÃO 5: DENSIDADE POPULACIONAL =====
                // REGRA ESPECIAL: MENOR densidade vence (lógica invertida)
                printf("\n┌─ COMPARAÇÃO: DENSIDADE POPULACIONAL ─┐\n");
                printf("%s: %.2f hab/km²\n", nomeDaCidade1, densidadePopulacional1);
                printf("%s: %.2f hab/km²\n", nomeDaCidade2, densidadePopulacional2);
                printf("(Nota: MENOR densidade vence!)\n");
                
                // Note: Aqui usamos < em vez de > (inversão da regra)
                if (densidadePopulacional1 < densidadePopulacional2) {
                    if (densidadePopulacional1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %.2f hab/km²\n", densidadePopulacional2 - densidadePopulacional1);
                    }
                } else if (densidadePopulacional2 < densidadePopulacional1) {
                    if (densidadePopulacional2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %.2f hab/km²\n", densidadePopulacional1 - densidadePopulacional2);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm %.2f hab/km²\n", densidadePopulacional1);
                }
                printf("└──────────────────────────────────────┘\n");
                break;
            }

            case 6: {
                // ===== COMPARAÇÃO 6: PIB PER CAPITA =====
                // Regra: Maior PIB per capita vence
                printf("\n┌─ COMPARAÇÃO: PIB PER CAPITA ─┐\n");
                printf("%s: %.2f\n", nomeDaCidade1, PIBperCapita1);
                printf("%s: %.2f\n", nomeDaCidade2, PIBperCapita2);
                
                if (PIBperCapita1 > PIBperCapita2) {
                    if (PIBperCapita1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %.2f\n", PIBperCapita1 - PIBperCapita2);
                    }
                } else if (PIBperCapita2 > PIBperCapita1) {
                    if (PIBperCapita2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %.2f\n", PIBperCapita2 - PIBperCapita1);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm %.2f\n", PIBperCapita1);
                }
                printf("└──────────────────────────────┘\n");
                break;
            }

            case 7: {
                // ===== COMPARAÇÃO 7: SUPER PODER =====
                // Regra: Maior super poder vence
                printf("\n┌─ COMPARAÇÃO: SUPER PODER ─┐\n");
                printf("%s: %.2f\n", nomeDaCidade1, superPoder1);
                printf("%s: %.2f\n", nomeDaCidade2, superPoder2);
                
                if (superPoder1 > superPoder2) {
                    if (superPoder1 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade1);
                        printf("Diferença: %.2f\n", superPoder1 - superPoder2);
                    }
                } else if (superPoder2 > superPoder1) {
                    if (superPoder2 > 0) {
                        printf("\n✓ VENCEDOR: %s\n", nomeDaCidade2);
                        printf("Diferença: %.2f\n", superPoder2 - superPoder1);
                    }
                } else {
                    printf("\n→ Empate! Ambas têm %.2f\n", superPoder1);
                }
                printf("└─────────────────────────────┘\n");
                break;
            }

            case 0: {
                // Opção de sair
                printf("\n✓ Obrigado por jogar! Até logo!\n");
                continuar = 'n';
                break;
            }

            // REQUISITO: Tratamento de entrada inválida (segurança)
            default: {
                printf("\n✗ ERRO: Opção inválida! Digite um número entre 0 e 7.\n");
                break;
            }
        }

        // Controle de loop para múltiplas comparações
        if (opcao != 0 && (opcao < 1 || opcao > 7)) {
            printf("Tente novamente...\n");
        } else if (opcao == 0) {
            continuar = 'n';
        } else if (opcao >= 1 && opcao <= 7) {
            printf("\nDeseja comparar outro atributo? (s/n): ");
            scanf(" %c", &continuar);
        }
    }

    return 0;
}
