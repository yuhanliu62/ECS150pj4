#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/fcntl.h>
#include <math.h>
#include <assert.h>


void Pthread_create();
void Pthread_join();

int main(int argc, char *argv[])
{
    //Correct invocation should pass one or more files via the command line
    //if no files are specified,  exit 1 
    //and print "pzip: file1 [file2 ...]" (followed by a newline)
    if (argc == 1)
    {
        printf("pzip: file1 [file2 ...]\n");
        exit(1);
    }



}

void Pthread_create(){

}