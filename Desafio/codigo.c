#include <stdio.h>
// EXERCICIO 1 - Faça um programa que contenha uma função que verifique qual o valor maior entre dois números
int exercicio1 (int m, int n){
	if (m > n){
		printf("\nO maior número é: %d ", m);
	}
	else if (m == n){
		printf("\nOs números são iguais!");
	}
	else {
		printf("\nO maior número é: %d", n);
	}
	return 0;
}

// EXERCICIO 2 - Faça um programa que contenha uma função que verifique qual o valor maior entre três números
int exercicio2 (int m, int n, int o){
	if ((m > n) && (m > o)){
		printf("O maior número é: %d", m);
	}
	else if ((n > m) && (n > o)){
		printf("O maior número é: %d", n);
	}
	else if ((m == n) && (m == o)){
		printf("Os números são iguais!");
	}
	else {
		printf("O maior número é: %d", o);
	}
	return 0;
}

// EXERCICIO 3 - Faça um programa que gere uma matriz 3x2. Essa matriz deverá conter 6 valores atribuídos pelo usuário (via scanf), no final o programa imprimirá (printf) a matriz com os valores
void exercicio3 (){
	int m[2], n[2], o[2];
	printf("\nMATRIZ DE VETORES\n");
	printf("DIGITE SEIS VALORES PARA CONSTRUIR A MATRIZ\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &m[0]);
	printf("Digite o segundo valor: ");
	scanf("%d", &m[1]);
	printf("Digite o terceiro valor: ");
	scanf("%d", &n[0]);
	printf("Digite o quarto valor: ");
	scanf("%d", &n[1]);
	printf("Digite o quinto valor: ");
	scanf("%d", &o[0]);
	printf("Digite o sexto valor: ");
	scanf("%d", &o[1]);
    
	printf("\n THE MATRIX \n");
	printf("%d ", m[0]);
	printf("%d\n", m[1]);
	printf("%d ", n[0]);
	printf("%d\n", n[1]);
	printf("%d ", o[0]);
	printf("%d\n", o[1]);
}

// EXERCICIO 4 - Faça um programa para gerar uma matriz 3x2. Essa matriz deverá pedir os valores para o usuário através de um laço de repetição. No final o programa imprimirá os valores também por meio de um laço de repetição.
int exercicio4 (int m, int n) {
	
	int matriz[m][n];

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Digite o [%d][%d] elemento: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\nMATRIZ\n");

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// EXERCICIO 5 - Faça um programa para gerar uma matriz 3x2 que peça os valores através de um laçoç de repetição. No final, o programa imprimirá através de um laço de repetição o valor dobrado de cada elemento.
int exercicio5 (int m, int n){

	int matriz[m][n];

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Digite o [%d][%d] elemento: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\nMATRIZ\n");
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf(" %d", 2 * matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// Exercicio 6 - Calcular o fatorial de um número
int exercicio6 (int n){
	int fatorial = 1;
	for (int i = n; i >= 1; i--){
		fatorial = fatorial * i;
	}
	return fatorial;
}

// Exercicio 7 - Faça um programa que receba 10 valores. Some os 
int exercicio7 (){
	int tamanho, vec[tamanho], j = 1, soma;
	printf("Quantos valores você quer somar?: ");
	scanf("%d", &tamanho);
	for (int i; i < tamanho; i++){
		printf("Digite o %dº valor: ", j++);
		scanf("%d", &vec[i]);
		soma = vec[i] + soma;
	}
	printf("\nA soma dos 10 elementos é: %d", soma);
	return 0;
}

int main(void){
	int valor, a, b, c;
	printf("* EXEMPLOS DE CÓDIGOS EM C *");
	printf("\n1 - COMPARAÇÃO DE VALORES");
	printf("\n2 - COMPARAÇÃO DE VALORES II");
	printf("\n3 - MATRIZ VETORIAL");
	printf("\n4 - MATRIZ COM TAMANHO VARIÁVEL");
	printf("\n5 - MATRIZ COM TAMANHO VARIÁVEL DOBRADA");
	printf("\n6 - FATORIAL");
	printf("\n7 - SOMATÓRIO");
	printf("\nEscolha qual programinha você vai querer rodar: ");
	scanf("%d", &valor);
	printf("\n");

	switch (valor){
		case 1:
		printf("MAIOR NÚMERO");
		printf("\nDigite os valores para comparação\n");
		printf("Primeiro número: ");
		scanf("%d", &a);
		printf("Segundo número: ");
		scanf("%d", &b);
		exercicio1(a, b);
		break;

		case 2:
		printf("MAIOR NÚMERO");
		printf("\nDigite os valores para a comparação\n");
		printf("Primeiro número: ");
		scanf("%d", &a);
		printf("Segundo número: ");
		scanf("%d", &b);
		printf("Terceiro número: ");
		scanf("%d", &c);
		exercicio2(a, b, c);
		break;

		case 3:
		exercicio3();
		break;

		case 4:
		printf("* TAMANHO DA MATRIZ *\n");
    	printf("Quantidade de LINHAS: ");
		scanf("%d", &a);
    	printf("Quantidade de COLUNAS: ");
		scanf("%d", &b);
		exercicio4(a, b);			
		break;

		case 5:
		printf("* TAMANHO DA MATRIZ  *\n");
		printf("Quantidade de LINHAS: ");
		scanf("%d", &a);
		printf("Quantidade de COLUNAS: ");
		scanf("%d", &b);
		exercicio5(a, b);
		break;

		case 6:
		printf("FATORIAL\n");
		printf("Digite um valor: ");
		scanf("%d,", &a);
		if (a > 0){
			b = exercicio6(a);
			printf("O resultado do fatorial é: %d", b);
		}
		else {
			printf("\nVocê deve inserir um número maior que 0");
		}
		break;

		case 7:
		exercicio7();
		break;

		default:
		printf("ERROR 404");
	}

}