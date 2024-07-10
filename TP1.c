#include <stdio.h>																											//mandamos o pré-processador ir a sua diretoria buscar o ficheiro stdio.h
#include <stdint.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>																											
#define N 5																													//Define uma variavel com um valor

main()

{
	int i=0,menu,inseridos=0,para=0,a,alt;																					//define um array para o uso dos serviços
	int inst[N] = {-1,-1,-1,-1,-1};																							//define um array para o uso dos serviços
	char nome[N][50];																										//define um array para o uso dos serviços
	int estado[N]={0,0,0,0,0};																								//define um array para o uso dos serviços
	setlocale(LC_ALL, "Portuguese");																						//localiza a biblioteca portuguesa para adicionar os acentos
	do
	{
		system("cls");																										//limpa a consola	
		printf("-------------------------\n");																				//printa no ecra
		printf("|1 - Inserir instrucao	|\n");
		printf("|2 - Executar instrucao	|\n");
		printf("|3 - Alterar instrucao	|\n");
		printf("|4 - listar instrucoes	|\n");
		printf("|0 - sair		|\n");
		printf("-------------------------\n");
		printf("\n\n");
		printf("\n  Introduza um valor: ");
		scanf("%d", &menu);																									//recebe o código que define qual dos casos executar

		switch(menu){

		case 1:
			if(inseridos<N)																									//só ocorre quando a condição se verifica
			{
				system("cls");
						for(i=0;i<N;i++)																					//precorre o array segundo a condição exigida
						{
						printf("|=No maximo pode conter 5 instrucoes=|\n\nInserira um nome para a instrucao: " );
       					scanf("%s",&nome[i][0]);
       					printf("\nIntroduza um numero identificatorio para a instrucao: ");
						scanf("%d", &a);
       					break;																								//quebra o ciclo aonde está inserido
       					}
				for(i=0;i<N;i++)
				{
					if(inst[i]==a)
					{
						printf("O numero ja se encontra em uso \n");
						system("pause");																					// não avança para a próxima instrução enquanto não for premida uma tecla
						break;
					}
					if(inst[i]==-1)break;
				}
				inst[i]=a;
				inseridos++;
				break;
			}
			else																											//ocorre quando a confição do if for falsa
			{	
				printf("Atingiu o numero maximo de instrucoes\n");
				system("pause");
				break;
			}
		break;
		case 2:
		system("cls");
		if(inseridos==0){
			system("cls");
			printf("Ainda nao inseriu nenhuma instrucao!\n\n\n");
			system("pause");
		}else{
			printf("Insira a instrucao a executar: ");													
			scanf("%d", &alt);																	
			for(i=0;i<N;i++)
			{
				if(alt==inst[i]) break;
			}
			if(estado[i]==0)
			{
				estado[i]=1;
				printf("\n\nA instrucao %d foi executada!\n\n\n", inst[i]);		
				system("pause");																	
			} 
		else if(estado[i]==1){																						
				estado[i]=0;
				printf("A instrucao %d parou de ser executada!\n\n\n", inst[i]);			
				system("pause");																	
				}	
			else{
				printf("Servico invalido \n");
				system("pause");
				}
			}
		break;

		case 3:
				if(inseridos==0)
				{
				system("cls");
				printf("Ainda nao inseriu nenhuma instrucao\n\n\n");
				system("pause");
				}
				else
				{
				system("cls");
				printf("|=Nota: As posicoes variam entre 0 e 4=|\n");
				printf("");
         		printf("\n\n\nPosicao da instrucao a alterar: ");
    			scanf("%d", &i);
				printf("\nNovo valor para a instrucao: ");
				scanf("%d", &inst[i]);
				break;
				}
		break;
		case 4:
			system("cls");
			if(inseridos == 0)
			{
				printf("Ainda nao inseriu nenhuma instrucao\n\n");
				system("pause");
			}else{
				for(i=0;i<inseridos;i++)
				printf("Instrucao inserida na posicao Nº%d:\nNome: %s => Numero: %d  => Estado: %d\n", i+1, nome[i], inst[i],estado[i]);
				system("pause");
				break;
				}
		break;
		case 0:
			printf("Adeus\n");
			break;
			default:
				printf("Opcao invalida");
				system("pause");
		}
	} while (menu);
}
