#include<stdio.h>
#include<unistd.h>


int main(){
	if (fork()) {
		printf(" Pai\n");
	}else {
		printf("Arquivos no diretorio:\n" );
		execl( "/usr/bin/firefox", "firefox", NULL);
		printf(" Parent Process\n");
	}
	printf("Fim\n");
	return 0;
}

