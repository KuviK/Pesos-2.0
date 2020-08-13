#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que pede ao utilizador para decidir qual o contexto e que trabalha com limites
   Autor:  Luís Filipe */

//declaração de subrotinas
int IntervaloPesos(float pesoMax, float pesoMin);


int main(int argc, char *argv[]) {
	
	//Variaveis
	int opcao,quantidadePessoas;
	float pesoMax, pesoMin;

	//Limpar Consola
	system("cls");

	//Solicitaçao do peso maximo do intervalo
	printf("Insira o peso Maximo: ");
	scanf("%f", &pesoMax);

	//Solicitaçao do peso minimo do intervalo
	printf("Insira o peso Minimo: ");
	scanf("%f", &pesoMin);

	//Chamar Função
	quantidadePessoas = IntervaloPesos(pesoMax,pesoMin);
	
	//Apresentação do numero de pessoas que correspondem à condição pretendida
	printf("\nA quantidade de pessoas com peso compreendido entre %.2f e %.2f kg e de: %d", pesoMin, pesoMax, quantidadePessoas);
	
	//pausa
	getchar();
}



/*
	Esta função mostra todos os pesos compreendidos no intervalo inserido pelo utilizador
*/
int IntervaloPesos(float pesoMax, float pesoMin) {
	
	//declaração de variaveis locais
	float peso;
	int quantidadePessoas, aux;

	//Limpar Consola
	system("cls");
	
	//Inicializar Variaveis
	quantidadePessoas = 0;
	aux = 0;
	
	//Informar opção de saída
	puts("Insira o peso como 0 para terminar a aplicacao");
	
	//Se o peso maximo for inferior ao peso minimo trocar os valores de forma a que o minimo passe a ser o maximo e o maximo o minimo
	if (pesoMax < pesoMin) 
	{
		aux = pesoMax;
		pesoMax = pesoMin;
		pesoMin = aux;
	}

	puts("");
	
	//Solicitação do(s) peso(s) ao utilizador
	do
	{
		//Solicitaçao do peso 
		printf("Insira um peso: ");
		scanf("%f", &peso);

		//Verificar se o(s) peso(s) inserido(s) está/estão dentro do intervalo 50 a 80kg
		if (peso >= pesoMin && peso < pesoMax)
			quantidadePessoas++; //Auto-incrementar

	} while(peso > 0); //Assumindo que é impossível ter 0kg ou peso negativo.
	
	//retornar a quantidade de pessoas
	return quantidadePessoas;
}



