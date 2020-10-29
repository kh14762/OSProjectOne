#include <iostream>
#include <fstream.h>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

using namespace std;

void *sifter (char *);
void *decode (char *);
void *substitute (char *);
void *hill (char *);
void *peak (char *);

int main()
{
    pthread_t sifter_id;
    pthread_t decoder_id;
    pthread_t substitute_id;
    pthread_t hill_id;
    pthread_t peak_id;

    cout << "Hello World! its me Kevin!";
    return 0;
}

