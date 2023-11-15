#include <stdio.h>
#include <pthread.h>

void* thread_function(void* arg) {
    printf("Inside the new thread\n");
    return NULL;
}

int main() {
    pthread_t tid;
    int result;

    
    result = pthread_create(&tid, NULL, thread_function, NULL);
    if (result != 0) {
        printf("Error creating thread\n");
        return 1;
    }

    printf("Inside the main thread\n");
    pthread_join(tid, NULL); 
    return 0;
}

