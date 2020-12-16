#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function( void *ptr );

int main(){
     pthread_t thread1, thread2;
     const char *message1 = "Thread 1";
     const char *message2 = "Thread 2";
     int  iret1, iret2;

     iret1 = pthread_create( &thread1, NULL, print_message_function, (void*) message1);

     iret2 = pthread_create( &thread2, NULL, print_message_function, (void*) message2);

     printf("pthread_create() for thread 1 returns: %d\n",iret1);
     printf("pthread_create() for thread 2 returns: %d\n",iret2);

    printf("Thread principal criou as threads 1 e 2 e agora vai esperar o termino delas\n");
    pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);
    printf("Threads 1 e 2 encerraram atividades, thread principal voltou a ser executada\nj=%d\n",j); 
    exit(EXIT_SUCCESS);
}

void *print_message_function(void *ptr ){
     char *message;
     message = (char *) ptr;
     printf("%s\n", message);
}
