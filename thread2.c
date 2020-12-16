#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int x=1;

void *funcao(void *args){
	printf("Thread secundaria - aguardando valor de x ser alterado na Thread principal.\n");
	while (1==x);
	printf("Thread secundaria encerrando sua execução.");
}

int main() {
	pthread_t thread1;
	pthread_create(&thread1, NULL, funcao, NULL);
	printf("Thread principal - Introduza novo Valor de x: ");
	scanf("%d",&x);
	pthread_join(thread1, NULL);
	return 0;  
  }
