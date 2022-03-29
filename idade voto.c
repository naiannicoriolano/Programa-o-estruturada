/*Menor que 1 -> Não nasceu
1 até 15 -> não vota
16 ou 17 -> opcional
18 até 64 -> obrigatório
65 ou mais -> opcional
41 -> ganha prêmio 1 $$$
82 -> ganha prêmio 2 $$$ */

#include <stdio.h>
#include <stdlib.h>


int main() {
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade == 82){
		printf("Ganhou premio 2 $$$");
			}if(idade != 82)
			 if(idade >= 65){
				printf("Voto opcional");
					}if(idade == 41){
						printf("Ganhou premio 1 $$$");
							}if(idade < 65)
								if(idade >= 18)
								if(idade != 41){
									printf("Voto obrigatorio");
										}if(idade >= 16)
										if(idade <= 17){
											printf("Voto opcional");
												}if(idade <= 15)
												if(idade >= 1){
													printf("Nao vota");
														}if(idade < 1){
															printf("Nao nasceu");
}


	return 0;
}


