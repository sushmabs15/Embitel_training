/*33. Implement producer consumer algorithm with thread share data as array between producer and consumer */

#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>


#define MAX 5 // Maximum items a producer can produce or a consumer can consume
#define BUF 5 // Size of the buffer

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
int buffer[BUF];
pthread_mutex_t mutex;

void *producer(void *pno)
{   
    int item;
    for(int i = 0; i < MAX; i++) {
        item = rand();
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in] = item;
        printf("Producer %d: Insert Item %d at %d\n", *((int *)pno),buffer[in],in);
        in = (in+1)%BUF;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
}
void *consumer(void *cno)
{   
    for(int i = 0; i < MAX; i++) {
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        int item = buffer[out];
        printf("Consumer %d: Remove Item %d from %d\n",*((int *)cno),item, out);
        out = (out+1)%BUF;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
    }
}

int main()
{  
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);

    int arr[len];
    printf("\narray elements:\n");
    for(int i = 0; i < len; i++){
        printf("\tarr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }         

    pthread_t pro[len],con[len];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty,0,BUF);
    sem_init(&full,0,0);

    for(int i = 0; i < len; i++) {
        pthread_create(&pro[i], NULL, (void *)producer, (void *)&arr[i]);
    }
    for(int i = 0; i < len; i++) {
        pthread_create(&con[i], NULL, (void *)consumer, (void *)&arr[i]);
    }

    for(int i = 0; i < len; i++) {
        pthread_join(pro[i], NULL);
    }
    for(int i = 0; i < len; i++) {
        pthread_join(con[i], NULL);
    }

    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
    
}
