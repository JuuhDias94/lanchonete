#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu();

int main()
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentua��o

	int c, num; //vari�veis do tipo inteiro
	int qtcq = 0, qtxs = 0, qtxb = 0, qtm = 0, qts = 0, qta = 0, qtr = 0;
	int qt[7] = { 0 };
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0; //vari�veis do tipo ponto flutuante
	float totalPedido; 

	menu(); //menu, que est� depois de finalizado o main
	
	//mensagem para o usu�rio fazer sua escolha:
	printf("Digite o n�mero do item que deseja comprar ou digite QUALQUER OUTRO N�MERO PARA FINALIZAR a compra: ");
	scanf_s("%d", &num);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado

	//la�o de repeti��o para as op��es do menu
	while ((num >= 1) && (num <= 7))
	{
		switch (num) //op��es do menu
		{
		case 1: //escolhe cachorro-quente
			printf("\nVOC� ESCOLHEU CACHORRO-QUENTE!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qtcq);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[0] = qt[0] + qtcq; //para conseguir que some mais de uma vez o mesmo produto
			num1 = qt[0] * 5.00; //multiplica��o da quantidade pelo valor do produto
			break;
		case 2: //escolhe x-salada
			printf("\nVOC� ESCOLHEU X-SALADA!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qtxs);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[1] = qt[1] + qtxs;
			num2 = qt[1] * 8.79;
			break;
		case 3: //escolhe x-bacon
			printf("\nVOC� ESCOLHEU X-BACON!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qtxb);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[2] = qt[2] + qtxb;
			num3 = qt[2] * 9.99;
			break;
		case 4: //escolhe misto
			printf("\nVOC� ESCOLHEU MISTO!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qtm);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[3] = qt[3] + qtm;
			num4 = qt[3] * 6.89;
			break;
		case 5: //escolhe salada
			printf("\nVOC� ESCOLHEU SALADA!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qts);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[4] = qt[4] + qts;
			num5 = qt[4] * 4.80;
			break;
		case 6: //escolhe �gua
			printf("\nVOC� ESCOLHEU �GUA!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qta);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[5] = qt[5] + qta;
			num6 = qt[5] * 3.49;
			break;
		case 7: //escolhe refrigerante
			printf("\nVOC� ESCOLHEU REFRIGERANTE!\n");
			printf("Digite a quantidade do item que deseja comprar: ");
			scanf_s("%d", &qtr);
			while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado
			qt[6] = qt[6] + qtr;
			num7 = qt[6] * 4.99;
			break;
		default: //mostra op��o inv�lida
			printf("\nOP��O INV�LIDA!\n");
			break;
		}

		//mensagem para o usu�rio fazer sua escolha:
		printf("\nDigite o n�mero do item que deseja comprar ou digite QUALQUER OUTRO N�MERO PARA FINALIZAR a compra: ");
		scanf_s("%d", &num);
		while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer do teclado

	}

	//in�cio do resumo da compra:
	printf("\n\n");
	printf("-----------------RESUMO DO PEDIDO-------------------\n");
	printf("____________________________________________________\n");
	printf("PRODUTO            QUANTIDADE   PRE�O      SUBTOTAL \n");
	printf("                                UNIT�RIO            \n");
	printf("                                                    \n");

	for (int item = 1; item <= 7; item++)
	{

		switch (item)
		{
		case 1:
			if (qt[0] > 0)
			{
				printf("Cachorro-quente\t        ");
				printf("%d\t ", qt[0]);
				printf("5,00\t     ");
				printf("%.2f\t", num1);
				printf("\n\n");
			}
			break;
		case 2:
			if (qt[1] > 0)
			{
				printf("X-salada\t        ");
				printf("%d\t ", qt[1]);
				printf("8,79\t     ");
				printf("%.2f\t", num2);
				printf("\n\n");
			}
			break;
		case 3:
			if (qt[2] > 0)
			{
				printf("X-bacon\t\t        ");
				printf("%d\t ", qt[2]);
				printf("9,99\t     ");
				printf("%.2f\t", num3);
				printf("\n\n");
			}
			break;
		case 4:
			if (qt[3] > 0)
			{
				printf("Misto\t\t        ");
				printf("%d\t ", qt[3]);
				printf("6,89\t     ");
				printf("%.2f\t", num4);
				printf("\n\n");
			}
			break;
		case 5:
			if (qt[4] > 0)
			{
				printf("Salada\t\t        ");
				printf("%d\t ", qt[4]);
				printf("4,80\t     ");
				printf("%.2f\t", num5);
				printf("\n\n");
			}
			break;
		case 6:
			if (qt[5] > 0)
			{
				printf("�gua\t\t        ");
				printf("%d\t ", qt[5]);
				printf("3,49\t     ");
				printf("%.2f\t", num6);
				printf("\n\n");
			}
			break;
		case 7:
			if (qt[6] > 0)
			{
				printf("Refrigerante\t        ");
				printf("%d\t ", qt[6]);
				printf("4,99\t     ");
				printf("%.2f\t", num7);
				printf("\n\n");
			}
			break;
		default:
			printf("\nOP��O INV�LIDA!\n");
			break;
		}

	} //fim do resumo da compra

	//valor total do pedido:
	totalPedido = num1 + num2 + num3 + num4 + num5 + num6 + num7;
	printf("____________________________________________________\n");
	printf("                                                    \n");
	printf("            -> TOTAL A PAGAR: %.2f <-\n\n\n", totalPedido);
	
	system("pause");
	return 0;
}

int menu()
{ //menu:
	printf(" _______________________________________________________  \n");
	printf("                                                          \n");
	printf("                           MENU                           \n");
	printf(" _______________________________________________________  \n");
	printf("|       |                    |         |                | \n");
	printf("| ITEM  | PRODUTO            | C�DIGO  | PRE�O UNIT�RIO | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 1     | Cachorro-quente    | 100     | 5,00           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 2     | X-salada           | 101     | 8,79           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 3     | X-bacon            | 102     | 9,99           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 4     | Misto              | 103     | 6,89           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 5     | Salada             | 104     | 4,80           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 6     | �gua               | 105     | 3,49           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("|       |                    |         |                | \n");
	printf("| 7     | Refrigerante       | 106     | 4,99           | \n");
	printf("|_______|____________________|_________|________________| \n");
	printf("                                                          \n");
	printf("                                                          \n");

	return 0;
}
