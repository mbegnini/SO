#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (){

  pid_t idProcesso;
  printf("Iniciando o programa\n");
  idProcesso = fork();
  if(idProcesso<0)
      return 1;  
  else if(idProcesso == 0)
      printf("Sou o processo filho ID: %d, pai ID: %d\n", 
        getpid(), getppid());  
  else
      printf("Sou o processo pai com ID: %d, pai ID: %d, 
        filho ID: %d\n", getpid(), getppid(),idProcesso); 
  
  return 0;;
}
