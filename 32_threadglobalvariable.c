#include<stdio.h>
#include<pthread.h>
int cnt;
int num = 5;
pthread_t th;
pthread_t th2;
void *myfunc();
void *myfunc2();
pthread_mutex_t mlock;
int main()
{
  char ch;
  int exitstat;
  void *retptr;
  pthread_create(&th,NULL,myfunc, NULL);
  pthread_create(&th2,NULL,myfunc2, NULL);
  pthread_join(th,&retptr);
  pthread_join(th2,&retptr);
}

void *myfunc()
{
  pthread_mutex_lock(&mlock);
  int fact = 1,i;
  for(i = 1; i <= num; i++){
    fact = fact * i;
  }
  printf("factorial: %d\n",fact);
  pthread_mutex_unlock(&mlock);
}

void *myfunc2()
{
  pthread_mutex_lock(&mlock); int sum = 0;
  for(int i = 0; i <= num; i++){
    sum = sum + i;
  }
  printf("sum of numbers: %d\n", sum);
  pthread_mutex_unlock(&mlock);
}
