#include <iostream>
#include <fstream>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

using namespace std;

void *sifter (void *);
void *decode (void *);
void *substitute (void *);
void *hill (void *);
void *peak (void *);

int main()
{
    pthread_t sifter_id;
    pthread_t decoder_id;
    pthread_t substitute_id;
    pthread_t hill_id;
    pthread_t peak_id;
    void* sifterPointer;
    int result;
    char *message;

    result = pthread_create(&sifter_id, NULL, sifter, (void*)message);
    if (result != 0)
    {
        perror("Thread Creation FAILED");
        exit(EXIT_FAILURE);
    }
    result = pthread_join(sifter_id, &sifterPointer);
    if (result != 0)
    {
        perror("Join FAILED");
        exit(EXIT_FAILURE);
    }
}

void *sifter(void *)
{
    cout << "Hello this is your sifter thread speaking" << endl;
    pthread_exit(0);
}

