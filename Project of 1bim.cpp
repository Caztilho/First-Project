#include <stdio.h>
#include <string.h>
#include <locale.h>

	float c1, c2, area, valor_lampada, classe, potencia, lampadas, total, mao_de_obra;
	char comodo[20];
	int arredondamento;

int main() {
	setlocale(LC_ALL, "Portuguese");
		
    printf("-quarto\n-sala de tv\n-salas\n-cozinha\n-varandas\n-escritorio\n-banheiro\n\nEscolha seu cômodo:\n");
    scanf("%s", &comodo);
    printf("Qual o comprimento de um lado do seu cômodo?\n");
    scanf("%f", &c1);
    printf("Qual o comprimento de outro lado do seu cômodo?\n");
    scanf("%f", &c2);
    printf("Qual o valor pago nas lâmpadas?\n");
    scanf("%f", &valor_lampada);

	if((strcmp(comodo, "quarto") == 0) || (strcmp(comodo, "Quarto") == 0) || (strcmp(comodo, "sala da tv") == 0) || (strcmp(comodo, "Sala da tv") == 0) || (strcmp(comodo, "sala da TV") == 0) || (strcmp(comodo, "Sala da TV") == 0)) {
		
		classe = 1;
		potencia = 15;
		
	} else {
		
		if((strcmp(comodo, "salas") == 0) || (strcmp(comodo, "Salas") == 0) || (strcmp(comodo, "cozinha") == 0) || (strcmp(comodo, "Cozinha") == 0) || (strcmp(comodo, "varandas") == 0) || (strcmp(comodo, "Varandas") == 0)) {
			
			classe = 2;
			potencia = 18;
			
		} else {
			
			if((strcmp(comodo, "escritorio") == 0) || (strcmp(comodo, "Escritorio") == 0 || (strcmp(comodo, "banheiro") == 0) || (strcmp(comodo, "Banheiro") == 0))) {
				
				classe = 3;
				potencia = 20;
				
			} 
			
		}
		
	}

	//Área em metros quadrados do cômodo
	area = c1 * c2;
	//Total de lâmpadas
	lampadas = (potencia * area) / 60;
	//Preço total das lâmpadas
	total = lampadas * valor_lampada;
	//Custo da mão de obra
	mao_de_obra = lampadas * 5;
	
	//Arredondar o número de lâmpdas
	arredondamento = lampadas;
	
	if ((lampadas - arredondamento) == 0) {
		
	} else {
		
		arredondamento = arredondamento + 1;
	}
	
	
	if(classe == 0 && potencia == 0){
		
		printf("O cômodo que você digitou é inválido!\n");
		
	} else {
		
		printf("\nCômodo: %s\n", comodo);
		
	}

	printf("Área (metros quadrados) do cômodo: %f\n", area);
	printf("Potência de iluminação por metros quadrados: %f\n", potencia);
	printf("Total de lâmpadas necessárias aproximadamente: %d\n", arredondamento);
	printf("Total a pagar pelas lâmpadas: R$%f\n", total);
	printf("Valor da mão de obra: R$%f\n", mao_de_obra);

	return 0;
	
}
